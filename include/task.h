#ifndef TESSERACS_TASK_H
#define TESSERACS_TASK_H

#include <string>

namespace tesseracs {

class Task {
  public:
    Task(std::string name, int estimate_points, bool completed);

    const std::string& name() const;
    int estimate_points() const;
    bool completed() const;
    std::string status_label() const;

  private:
    std::string name_;
    int estimate_points_;
    bool completed_;
};

}  // namespace tesseracs

#endif
