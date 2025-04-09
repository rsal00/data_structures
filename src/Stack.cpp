#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack() : capacity(10), size(0), top(-1)
{
    arr = new int[capacity];
}

Stack::~Stack()
{
    clear();
}

Stack::Stack(const Stack& other)
{
    capacity = other.capacity;
    size = other.size;
    top = other.top;

    arr = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
}

void Stack::push(int data)
{
    if (!arr)
    {
        cerr << "Failed allocation!" << endl;
        return;
    }

    if (isFull())
    {
        cerr << "Stack is full!" << endl;
    }
    else
    {
        arr[++top] = data;
        size++;
    }
}

void Stack::pop()
{
    if (isEmpty())
    {
        cerr << "Stack is empty!" << endl;
    }
    else
    {
        top--;
        size--;
    }
}

void Stack::clear()
{
    delete[] arr;
    arr = nullptr;
    top = -1;
    size = 0;
    capacity = 10;
}

int Stack::peek() const
{
    if (isEmpty())
    {
        cerr << "Stack is empty!" << endl;
        return top;
    }
    return arr[top];
}

int Stack::getCap() const
{
    return capacity;
}

int Stack::getSize() const
{
    return size;
}

int Stack::getTop() const
{
    return top;
}

bool Stack::isFull() const
{
    return (top == capacity - 1);
}

bool Stack::isEmpty() const
{
    return (top == -1);
}

ostream& operator<<(ostream& out, const Stack& s)
{
    if (s.isEmpty())
    {
        out << "Stack is empty!" << endl;
    }
    else
    {
        for (int i = 0; i < s.size; i++)
        {
            out << "Element " << i+1 << ": " << s.arr[i] << endl;
        }
    }
    return out;
}

Stack& Stack::operator=(const Stack& rhs)
{
    if (this != &rhs)
    {
        delete[] arr;
        capacity = rhs.capacity;
        size = rhs.size;
        top = rhs.top;

        arr = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            arr[i] = rhs.arr[i];
        }
    }
    return *this;
}
