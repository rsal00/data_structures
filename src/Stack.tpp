//#include "Stack.h"
#include <iostream>
using namespace std;

template <typename T>
Stack<T>::Stack() : capacity(10), size(0), top(-1)
{
    arr = new T[capacity];
}

template <typename T>
Stack<T>::~Stack()
{
    clear();
}

template <typename T>
Stack<T>::Stack(const Stack& other)
{
    capacity = other.capacity;
    size = other.size;
    top = other.top;

    arr = new T[capacity];
    for (int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
}

template <typename T>
void Stack<T>::push(T data)
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

template <typename T>
void Stack<T>::pop(T& data)
{
    if (isEmpty())
    {
        cerr << "Stack is empty!" << endl;
    }
    else
    {
        data = arr[top];
        top--;
        size--;
    }
}

template <typename T>
void Stack<T>::clear()
{
    delete[] arr;
    arr = nullptr;
    top = -1;
    size = 0;
    capacity = 10;
}

template <typename T>
T Stack<T>::peek() const
{
    if (isEmpty())
    {
        cerr << "Stack is empty!" << endl;
        return top;
    }
    return arr[top];
}

template <typename T>
int Stack<T>::getCap() const
{
    return capacity;
}

template <typename T>
int Stack<T>::getSize() const
{
    return size;
}

template <typename T>
int Stack<T>::getTop() const
{
    return top;
}

template <typename T>
bool Stack<T>::isFull() const
{
    return (top == capacity - 1);
}

template <typename T>
bool Stack<T>::isEmpty() const
{
    return (top == -1);
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const Stack<T>& s)
{
    if (s.isEmpty())
    {
        out << "Stack is empty!" << std::endl;
    }
    else
    {
        for (int i = 0; i < s.size; i++)
        {
            out << "Element " << i+1 << ": " << s.arr[i] << std::endl;
        }
    }
    return out;
}

template <typename T>
Stack<T>& Stack<T>::operator=(const Stack& rhs)
{
    if (this != &rhs)
    {
        delete[] arr;
        capacity = rhs.capacity;
        size = rhs.size;
        top = rhs.top;

        arr = new T[capacity];
        for (int i = 0; i < size; i++)
        {
            arr[i] = rhs.arr[i];
        }
    }
    return *this;
}
