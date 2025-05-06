@echo off
@REM To use just go into main folder (i.e. leetcode) and run the command with a name for the new folder (i.e. 00002. Add Two Numbers)

mkdir %1
cd %1
mkdir C++
mkdir Python
mkdir Rust
echo( > Readme.md
echo( > C++/sol.cpp
echo( > Python/sol.py
echo( > Rust/sol.rs