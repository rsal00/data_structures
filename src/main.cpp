#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
#include "Stack.h"
using namespace std;

int main()
{
    LinkedList li;

    li.add(1);
    li.add(2);
    li.add(3);
    li.add(4);
    li.add(5);

    li.remove(1);
    li.remove(100);
    li.remove(5);

    cout << li << endl;

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
