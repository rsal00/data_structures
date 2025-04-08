#pragma once
#ifndef QUEUE_H
#define QUEUE_H

#include <ostream>

class Queue
{
public:
    Queue();
    ~Queue();
    Queue(const Queue& otherQ);

    void enqueue(int data);
    void dequeue();

    bool isFull() const;
    bool isEmpty() const;

    int getFront() const;
    int getRear() const;
    int getFrontElement() const;
    int getRearElement() const;

    int getSize() const;
    int getCap() const;

    void clear();

    friend std::ostream& operator<<(std::ostream& out, const Queue& q);
    Queue& operator=(const Queue& rhs);

private:
    int* arr;
    int capacity;
    int size;
    int front, rear;
};

#endif
