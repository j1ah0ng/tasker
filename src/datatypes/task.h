#ifndef DATATYPES_TASK_H
#define DATATYPES_TASK_H

#include <chrono>

using namespace std::chrono;

class Task {
    private:
        int priority_;
        minutes time_mins_;
        int Clamp(int priority);
    public:
        static const int kMaxPriority = 5000;
        static const int kMinPriority = 0;

        Task(const Task &task);
        explicit Task(int priority);
        Task(int priority, minutes time_mins);
        Task(int priority, int time_mins);
};

// Clamps priority to static constants
int Task::Clamp(int priority) {
    if (priority > kMaxPriority) return kMaxPriority;
    else if (priority < kMinPriority) return kMinPriority;
    else return priority;
}

// Copy constructor
Task::Task(const Task &task) : priority_(task.priority_) {}

Task::Task(int priority) :
    priority_(Clamp(priority)),
    time_mins_(minutes(0)) {}

Task::Task(int priority, minutes time_mins) :
    priority_(Clamp(priority)),
    time_mins_(minutes(time_mins)) {}

Task::Task(int priority, int time_mins) :
    priority_(Clamp(priority)),
    time_mins_(minutes(time_mins)) {}

#endif // DATATYPES_TASK_H
