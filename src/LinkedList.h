#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <ostream>

class LinkedList
{
public:
    struct Node
    {
        int data;
        Node* next = nullptr;
        Node* prev = nullptr;
    };

    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& other);

    void add(int d);

    void printPrev(int ele);

    void removeFirst();
    void removeLast();
    void remove(int d);

    void clear();

    friend std::ostream& operator<<(std::ostream& out, const LinkedList& list);
    LinkedList& operator=(const LinkedList& rhs);

private:
    Node* first;
    Node* last;
    int size;
};

#endif
