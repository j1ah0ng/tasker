#ifndef DATATYPES_QUEUE_H
#define DATATYPES_QUEUE_H

#include "task.h"
#include <vector>
#include <set>

class Queue {
    private:
        std::set<Task> back_;
};

#endif // DATATYPES_QUEUE_H
