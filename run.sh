#!/bin/sh
set -e
g++ -std=c++17 -Wall -Wextra -O2 -o main main.cpp
./main
