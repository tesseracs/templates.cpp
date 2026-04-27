#ifndef TESSERACS_RELEASE_PLAN_H
#define TESSERACS_RELEASE_PLAN_H

#include <string>
#include <vector>

#include "task.h"

namespace tesseracs {

class ReleasePlan {
  public:
    explicit ReleasePlan(std::string release_name);

    void add_task(Task task);
    std::string summary() const;

  private:
    std::string release_name_;
    std::vector<Task> tasks_;
};

}  // namespace tesseracs

#endif
