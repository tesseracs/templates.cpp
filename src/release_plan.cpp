#include "release_plan.h"

#include <sstream>
#include <utility>

namespace tesseracs {

ReleasePlan::ReleasePlan(std::string release_name) : release_name_(std::move(release_name)) {}

void ReleasePlan::add_task(Task task) {
    tasks_.push_back(std::move(task));
}

std::string ReleasePlan::summary() const {
    std::ostringstream output;
    int completed_tasks = 0;
    int remaining_points = 0;

    output << release_name_ << '\n';
    output << "======================" << '\n';

    for (const Task& task : tasks_) {
        output << "- " << task.name() << " [" << task.status_label() << "]"
               << " (" << task.estimate_points() << " pts)" << '\n';

        if (task.completed()) {
            ++completed_tasks;
        } else {
            remaining_points += task.estimate_points();
        }
    }

    output << '\n'
           << "Completed: " << completed_tasks << '/' << tasks_.size() << '\n'
           << "Remaining effort: " << remaining_points << " pts" << '\n';

    return output.str();
}

}  // namespace tesseracs
