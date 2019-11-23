#ifndef DATATYPES_LINKED_LIST_H
#define DATATYPES_LINKED_LIST_H

#include <stdlib.h>
#include "node.h"

template <typename T>
class LinkedList {
    private:
        Node<T> *head_;
    public:
        LinkedList(const LinkedList<T> &list);
        explicit LinkedList(Node<T> *head);
        LinkedList();

        void Push(T *data);
        Node<T> * GetHeadPointer(void);
};

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> &list) :
    head_(list.head_) {}

template <typename T>
LinkedList<T>::LinkedList(Node<T> *head) :
    head_(head) {}

template <typename T>
LinkedList<T>::LinkedList() :
    head_(nullptr) {}

template <typename T>
void LinkedList<T>::Push(T *data) {
    Node<T> *node = (Node<T> *) malloc(sizeof(Node<T>));
    node->data = data;
    node->next = nullptr;
    if (head_ == nullptr) {
        head_ = node;
    } else {
        head_->next = node;
    }
}

template <typename T>
Node<T> * LinkedList<T>::GetHeadPointer(void) {
    return head_;
}

#endif // DATATYPES_LINKED_LIST_H
