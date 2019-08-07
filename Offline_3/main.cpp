#include <bits/stdc++.h>
#include "linkedList.h"

/*
Task: Implement linked list perform the following operations:
        a. insert at first, last, and anywhere in between
        b. delete at first, last, and anywhere in between
        c. find length of the list
        d. display the elements in the list.
Author: Ali Ahnaf

*/
using namespace std;

LinkedList list1;

void insertQueue()
{
    int n;
    cout << "Enter the value to perform the operations" << endl;
    cout << "1. Insert at First\n2. Insert at Last\n3. Insert at specified index" << endl;
    cin >> n;

    switch(n)
    {
    case 1:

        cout << "Enter value to insert: ";
        cin >> n;
        list1.pushFront(n);
        list1.display();
        break;
    case 2:

        cout << "Enter value to insert: ";
        cin >> n;
        list1.pushBack(n);
        list1.display();
        break;
    case 3:

        int a,b;
        cout << "Enter value to insert: ";
        cin >> a;
        cout << "Enter index position to insert the value: ";
        cin >> b;
        list1.insertAt(b,a);
        list1.display();
        break;
    }

}


void deleteQueue()
{

    int n;
    cout << "1. Delete at First\n2. Delete at Last\n3. Delete at specified index" << endl;
    cin >> n;

    switch(n)
    {
    case 1:
        list1.deleteFront();
        list1.display();
        break;
    case 2:
        list1.deleteEnd();
        list1.display();
        break;
    case 3:
        cout << "Enter index position to delete: ";
        cin >> n;
        list1.deleteAt(n);
        list1.display();
        break;
    }


}
int main()
{

    bool run=true;
    int n;

    while(run)
    {
        cout << "Press the corresponding values to perform the desired operations: " << endl;
        cout << "1. Insert\n2. Delete" << endl;
        cin >> n;
        switch(n)
        {
        case 1:
            insertQueue();
            break;
        case 2:
            deleteQueue();
            break;
        }

    }




    return 0;
}
