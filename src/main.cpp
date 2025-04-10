#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"
#include "HashTable.h"
using namespace std;

int main()
{
    HashTable h;

    h.insert("Luka Doncic", 77);
    h.insert("Lebron James", 23);
    h.insert("Michael Jordan", 23);
    h.insert("Kobe Bryant", 24);
    h.insert("Nikola Jokic", 15);

    h.printTable();

    return 0;
}

// find missing number
// int arr[4] = {5, 6, 8, 9};

// int difference = arr[0];
// for (int i = 0; i < 4; i++)
// {
//     if ((arr[i] - i) != difference)
//     {
//         cout << "Missing number is " << i + difference << endl;
//         break;
//     }
// }
