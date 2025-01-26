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
        zig = pkgs.zig;
      in rec {
        # devShells.default = pkgs.mkShell {
        devShells.default = pkgs.buildFHSEnv {
          name = "fhs-default";
          nativeBuildInputs = with pkgs; [
            zig
            sdl3.lib
            sdl3.dev
          ];
        };

        packages.game = pkgs.game;
        defaultPackage = packages.game;
      }
    );
  }
