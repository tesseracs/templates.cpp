#include <iostream>

#include "release_plan.h"

int main() {
    tesseracs::ReleasePlan plan("Tesseracs C++ starter");

    plan.add_task(tesseracs::Task("CLI wiring", 3, true));
    plan.add_task(tesseracs::Task("Config validation", 2, true));
    plan.add_task(tesseracs::Task("Docs pass", 1, false));

    std::cout << plan.summary();
    return 0;
}
