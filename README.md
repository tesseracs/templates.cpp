# Tesseracs — cpp template

Starter project for [Tesseracs](https://github.com/tesseracs) chat sessions.

Clone URL: `https://github.com/tesseracs/templates.cpp`

## Layout

- `src/main.cpp` — entry point that builds a small release plan and prints a summary.
- `include/task.h` / `src/task.cpp` — a simple domain type with behavior.
- `include/release_plan.h` / `src/release_plan.cpp` — higher-level orchestration and formatting.
- `run.sh` — compiles the project into `build/` and runs it.

## Run

```sh
./run.sh
```

## Why this shape?

This template stays easy to run but feels closer to a real C++ starter:

- separate headers and implementation files
- a small namespace instead of free-floating helpers
- value types, encapsulation, and STL containers
- a tiny but practical example domain
