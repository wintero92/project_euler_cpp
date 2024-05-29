{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell {
  buildInputs = [
    pkgs.gcc
    pkgs.gtest
    pkgs.pkg-config
  ];
}
