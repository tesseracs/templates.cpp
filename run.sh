#!/bin/sh
set -e
mkdir -p build
g++ -std=c++17 -Wall -Wextra -Wpedantic -O2 -Iinclude src/main.cpp src/task.cpp src/release_plan.cpp -o build/main
./build/main
