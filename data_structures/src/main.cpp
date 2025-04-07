#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList li;

    li.add(1);
    li.add(2);
    li.add(26);
    li.add(72);
    li.add(78);

    cout << li;

    cout << endl;

    li.remove(26);

    cout << li;

    return 0;
}
