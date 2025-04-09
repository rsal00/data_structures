#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue() : capacity(10), size(0), front(-1), rear(-1)
{
    arr = new int[capacity];
}

Queue::~Queue()
{
    clear();
}

Queue::Queue(const Queue& otherQ)
{
    capacity = otherQ.capacity;
    size = otherQ.size;
    front = otherQ.front;
    rear = otherQ.rear;

    arr = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        arr[i] = otherQ.arr[i % capacity];
    }
}

void Queue::enqueue(int data)
{
    if (!arr)
    {
        cerr << "Failed allocation!" << endl;
        return;
    }

    if (isFull())
    {
        cerr << "Queue is full!" << endl;
        return;
    }
    else if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear = (rear + 1) % capacity;
    }
    arr[rear] = data;
    size++;
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cerr << "Queue is empty!" << endl;
    }
    else
    {
        front = (front + 1) % capacity;
        size--;
    }
}

bool Queue::isFull() const
{
    //return (capacity - 1 == (capacity - front + rear) % capacity);
    return (capacity == size);
}

bool Queue::isEmpty() const
{
    //return (front == rear);
    return (size == 0);
}

int Queue::getFront() const
{
    return front;
}

int Queue::getRear() const
{
    return rear;
}

int Queue::getFrontElement() const
{
    return arr[front];
}

int Queue::getRearElement() const
{
    return arr[rear];
}

int Queue::getSize() const
{
    //return (capacity - first + last) % capacity; // left to right
    return size;
}

int Queue::getCap() const
{
    return capacity;
}

void Queue::clear()
{
    delete[] arr;
    arr = nullptr;
}

ostream& operator<<(ostream& out, const Queue& q)
{
    int count = 0;
    int i = q.front;
    while (count != q.size)
    {
        out << "Element " << ++count << ": " << q.arr[i++ % q.capacity] << endl;
    }
    return out;
}

Queue& Queue::operator=(const Queue& rhs)
{
    if (this != &rhs)
    {
        delete[] arr;
        capacity = rhs.capacity;
        size = rhs.size;
        front = rhs.front;
        rear = rhs.rear;

        arr = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            arr[i] = rhs.arr[i % capacity];
        }
    }
    return *this;
}
