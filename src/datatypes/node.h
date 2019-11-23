#ifndef DATATYPES_NODE_H
#define DATATYPES_NODE_H

template <typename T>
struct Node {
    T *data;
    Node *next;
};

#endif // DATATYPES_NODE_H
