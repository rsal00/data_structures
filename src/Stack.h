#pragma once
#ifndef STACK_H
#define STACK_H

#include <ostream>

class Stack
{
public:
    Stack();
    ~Stack();
    Stack(const Stack& other);

    void push(int data);
    void pop();
    void clear();

    int peek() const;
    int getCap() const;
    int getSize() const;
    int getTop() const;

    bool isFull() const;
    bool isEmpty() const;

    friend std::ostream& operator<<(std::ostream& out, const Stack& s);
    Stack& operator=(const Stack& rhs);

private:
    int capacity;
    int size;
    int top;
    int* arr;
};

#endif
