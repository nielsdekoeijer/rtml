# inspired: https://github.com/mitchellh/libxev/blob/main/flake.nix
{
  description = "?";

  inputs = {
      nixpkgs-unstable.url = "github:nixos/nixpkgs/nixpkgs-unstable";
      flake-utils.url = "github:numtide/flake-utils";
      zig.url = "github:mitchellh/zig-overlay";
  };

  outputs = { 
      self, 
      nixpkgs-unstable,
      flake-utils,
      ... 
  } @ inputs: let 
    nixpkgs = nixpkgs-unstable;
    overlays = [
      (final: prev: rec {
        zig = inputs.zig.packages.${prev.system}."0.13.0";
        mlinference = prev.callPackage ./nix/package.nix {};
      })
    ];
   systems = builtins.attrNames inputs.zig.packages;
  in
    flake-utils.lib.eachSystem systems (
      system: let
        pkgs = import nixpkgs {inherit overlays system;};
      in rec {
        devShells.default = pkgs.buildFHSEnv {
          name = "fhs";
          targetPkgs = pkgs: [
            pkgs.zig
            pkgs.bash
            pkgs.pkg-config
            pkgs.curl
            pkgs.unzip
          ];
        };

        packages.fhs = devShells.default;
        defaultPackage = packages.fhs;
      }
    );
  }
