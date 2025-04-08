#include <iostream>
#include "LinkedList.h"
#include "Queue.h"
using namespace std;

int main()
{
    Queue q;
    q.enqueue(4);
    q.enqueue(0);
    q.enqueue(2);
    q.enqueue(9);

    q.dequeue();

    q.enqueue(11);

    cout << q;

    return 0;
}
