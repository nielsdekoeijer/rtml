{ stdenv
, lib
, zig
}:

stdenv.mkDerivation rec {
  pname = "game";
  version = "0.1.0";

  src = ./..;

  nativeBuildInputs = [ zig ];

  buildInputs = [];

  dontConfigure = true;

  preBuild = ''
    # Necessary for zig cache to work
    export HOME=$TMPDIR
  '';

  installPhase = ''
    runHook preInstall
    zig build -Doptimize=ReleaseFast --prefix $out install
    runHook postInstall
  '';

  outputs = [ "out" ];

  meta = with lib; {
    description = "?";
    homepage = "https://github.com/nielsdekoeijer/game-sdl3";
    license = licenses.mit;
    platforms = [ "x86_64-linux" "aarch64-linux" "x86_64-darwin" "aarch64-darwin" ];
  };
}

