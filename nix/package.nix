{ stdenv
, lib
, zig
, pkg-config
}:

stdenv.mkDerivation rec {
  pname = "mlinference";
  version = "0.1.0";

  src = ./..;

  nativeBuildInputs = [ zig pkg-config ];

  buildInputs = [];

  dontConfigure = true;

  preBuild = ''
    # Necessary for zig cache to work
    export HOME=$TMPDIR
  '';

  installPhase = ''
    runHook preInstall
    zig build -Doptimize=ReleaseFast -Dtarget=x86_64-linux-gnu --prefix $out install
    runHook postInstall
  '';

  outputs = [ "out" ];

  meta = with lib; {
    description = "?";
    homepage = "https://github.com/nielsdekoeijer/mlinference-sdl3";
    license = licenses.mit;
    platforms = [ "x86_64-linux" "aarch64-linux" "x86_64-darwin" "aarch64-darwin" ];
  };
}

