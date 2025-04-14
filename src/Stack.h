#pragma once
#ifndef STACK_H
#define STACK_H

#include <ostream>

template <typename T>
class Stack
{
public:
    Stack();
    ~Stack();
    Stack(const Stack& other);

    void push(T data);
    void pop(T& data);
    void clear();

    T peek() const;
    int getCap() const;
    int getSize() const;
    int getTop() const;

    bool isFull() const;
    bool isEmpty() const;

    template <typename t>
    friend std::ostream& operator<<(std::ostream& out, const Stack<t>& s);

    Stack& operator=(const Stack& rhs);

private:
    int capacity;
    int size;
    int top;
    T* arr;
};

#include "Stack.tpp"

#endif
