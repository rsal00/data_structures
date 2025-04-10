#pragma once
#include <sys/types.h>
#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <string>

class HashTable
{
public:
    struct Node
    {
        int data;
        std::string key;
        Node* next = nullptr;
        Node* prev = nullptr;

        Node(std::string k, int d) : key(k), data(d) {}
    };

    HashTable();
    ~HashTable();

    void insert(std::string k, int d);
    void remove(std::string k);

    void printTable();

private:
    int capacity;
    int size;
    Node** table;

    int hash(std::string k);
};

#endif
