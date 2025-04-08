#include "LinkedList.h"
#include <iostream>
#include <ostream>
using namespace std;

LinkedList::LinkedList() : size(0)
{
    first = nullptr;
    last = nullptr;
}

LinkedList::~LinkedList()
{
    destroy();
}

LinkedList::LinkedList(const LinkedList& other)
{
    first = nullptr;
    last = nullptr;
    size = 0;

    Node* current = other.first;
    while (current)
    {
        add(current->data);
        current = current->next;
    }
}

void LinkedList::add(int d)
{
    Node* temp = new Node;
    temp->data = d;

    if (!temp)
    {
        cerr << "Allocation failed!" << endl;
    }
    else
    {
        if (!first)
        {
            first = temp;
            last = temp;
            size++;
        }
        else
        {
            last->next = temp;
            temp->prev = last;
            last = temp;
            size++;
        }
    }
}

void LinkedList::destroy()
{
    Node* current = first;
    while (current)
    {
        Node* temp = current->next;
        delete current;
        current = temp;
    }
    first = nullptr;
    last = nullptr;
    size = 0;
}

void LinkedList::printPrev(int ele)
{
    Node* current = first;
    int i = 0;
    while (current)
    {
        if (i == ele - 1)
        {
            cout << "Previous Node from Element " << ele << ": " << current->prev->data << endl;
        }
        i++;
        current = current->next;
    }
}

void LinkedList::removeFirst()
{
    if (!first)
    {
        cerr << "List is empty" << endl;
        return;
    }

    // We set the a temp variable to the first in the list
    Node* temp = first;

    // We move the first ptr to the consecutive element in the list
    first = first->next;

    // We check if the consecutive element is not nullptr
    if (first)
    {
        // Set the prev ptr to nullptr since it is now the first in the list, which should point to nullptr
        first->prev = nullptr;
    }
    // If the first is pointing to nullptr, we know there are no more elements, so set last to nullptr as well
    else
    {
        last = nullptr;
    }
    delete temp;
    size--;
}

void LinkedList::removeLast()
{
    if (!first)
    {
        cerr << "List is empty!" << endl;
        return;
    }

    Node* temp = last;
    last = last->prev;

    if (last)
    {
        last->next = nullptr;
    }
    else
    {
        first = nullptr;
    }
    delete temp;
    size--;
}

void LinkedList::remove(int d)
{
    if (!first)
    {
        cerr << "List is empty" << endl;
        return;
    }
    Node* current = first;
    while (current)
    {
        Node* temp;
        if (current->data == d)
        {
            if (current == first)
            {
                first = current->next;
                if (first)
                    first->prev = nullptr;
                else
                    last = nullptr;
            }
            else if (current == last)
            {
                last = current->prev;
                if (last)
                    last->next = nullptr;
                else
                    first = nullptr;
            }
            else
            {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }
            delete current;
            size--;
            return;
        }
        current = current->next;
    }
}

ostream& operator<<(std::ostream& out, const LinkedList& list)
{
    LinkedList::Node* current = list.first;
    int i = 1;
    while (current)
    {
        out << "Element " << i++ << ": " << current->data << endl;
        current = current->next;
    }
    return out;
}

LinkedList& LinkedList::operator=(const LinkedList& rhs)
{
    if (this != &rhs)
    {
        destroy();

        Node* current = rhs.first;
        while (current)
        {
            add(current->data);
            current = current->next;
        }
    }
    return *this;
}
