#include "HashTable.h"
#include <iostream>
using namespace std;

HashTable::HashTable() : capacity(10), size(0)
{
    table = new Node*[capacity];
}

HashTable::~HashTable()
{
    for (int i = 0; i < size; i++)
    {
        Node* current = table[i];
        while (current)
        {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    delete[] table;
    table = nullptr;
}

int HashTable::hash(string k)
{
    int hashValue = 0;
    for (int i = 0; i < k.size(); i++)
    {
        hashValue += k[i];
    }

    return (hashValue % capacity);
}

void HashTable::insert(string k, int d)
{
    int index = hash(k);
    Node* head = table[index];

    Node* curr = head;
    // Check if key exists
    while (curr)
    {
        if (curr->key == k)
        {
            curr->data = d;
            size++;
            return;
        }
        curr = curr->next;
    }

    Node* newNode = new Node(k, d);
    newNode->next = head;
    if (head != nullptr)
    {
        head->prev = newNode;
    }

    table[index] = newNode;
    size++;
}

void HashTable::remove(string k)
{

}

void HashTable::printTable()
{
    for (int i = 0; i < capacity; i++)
    {
        cout << "Element " << i+1 << ": ";
        Node* curr = table[i];
        while (curr != nullptr)
        {
            cout << "(" << curr->key << ", " << curr->data << ") <-> ";
            curr = curr->next;
        }
        cout << "NULL" << endl;
    }
}
