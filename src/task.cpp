#include "task.h"

#include <utility>

namespace tesseracs {

Task::Task(std::string name, int estimate_points, bool completed)
    : name_(std::move(name)), estimate_points_(estimate_points), completed_(completed) {}

const std::string& Task::name() const {
    return name_;
}

int Task::estimate_points() const {
    return estimate_points_;
}

bool Task::completed() const {
    return completed_;
}

std::string Task::status_label() const {
    return completed_ ? "done" : "next";
}

}  // namespace tesseracs
