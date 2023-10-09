{ pkgs ? import (
  builtins.fetchTarball {
    url = "https://github.com/nixos/nixpkgs/archive/22.11.tar.gz";
    sha256 = "11w3wn2yjhaa5pv20gbfbirvjq6i3m7pqrq2msf0g7cv44vijwgw";
  }
) {} }:

with pkgs;

mkShell {
  buildInputs = [
    clang-tools
    pre-commit
    (python310.withPackages (ps: with ps; [
      pip
      virtualenv
    ]))
  ];
  shellHook = ''
    virtualenv venv
    source venv/bin/activate
    pip install platformio
    pio pkg update
    pre-commit install
  '';
}
