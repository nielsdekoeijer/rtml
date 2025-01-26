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
        zig = inputs.zig.packages.${prev.system}."master";
        game = prev.callPackage ./nix/package.nix {};
      })
    ];
   systems = builtins.attrNames inputs.zig.packages;
  in
    flake-utils.lib.eachSystem systems (
      system: let
        pkgs = import nixpkgs {inherit overlays system;};
      in rec {
        devShells.default = pkgs.mkShell {
          nativeBuildInputs = with pkgs; [
            zig
          ];
        };

        packages.game = pkgs.game;
        defaultPackage = packages.game;
      }
    );
  }
