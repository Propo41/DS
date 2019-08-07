#include <bits/stdc++.h>
#include "toolkit.h"


using namespace std;

/*
Problem Description: Reverse a linked list.
Method used: Two different approaches are used.
            1. While taking the input from the function pushBack(), every single
               address of the nodes are saved in an array of pointers. Then when
               the reverseList() is called, the individual data members are swapped
               with the array as a reference.
            2. the linked list is traversed every time to get the pointer of the last nodes.
               And the head pointer is used to get the pointer of the first nodes.
NOTE: APPROACH 2 IS BEING APPLIED NOW.
*/


int main()
{

    LinkedList l1;

    int tsc,n;

    cout << "Enter number of queries: ";
    cin >> tsc;

    while(tsc--)
    {
        cout << "Enter number to add: ";
        cin >> n;
        l1.pushBack(n);

    }
    cout << "Displaying list before reversing: ";
    l1.display();
    cout << "Displaying list after reversing: ";
    l1.reverseList();
    l1.display();


    return 0;
}
