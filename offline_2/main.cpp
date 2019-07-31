#include <bits/stdc++.h>
#include "stack.h"
#include "queue.h"

using namespace std;

int main()
{

    string str;
    bool end=false, stack_on=false;
    int n;

    cout << "Stack or Queue?" << endl;
    cin >> str;

    getchar();
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    if(str=="stack")
        stack_on=true;


    cout << "Enter size: ";
    cin >> n;

    Stack <int> s(n);
    Queue <int> q(n);


    while(!end)
    {
        char ch;
        cout << "Press '+' to insert, '-' to delete or '*' to exit: "  << endl;
        cin >> ch;

        if(ch=='+')
        {
            cout << "Enter element: ";
            cin >> n;

            if(stack_on)
                s.push(n);
            else
                q._insert(n);
        }
        else if(ch=='-')
        {
            if(stack_on)
                s.pop();
            else
                q._delete();
        }
        else
        {
            cout << "Exiting program.." << endl;
            if(stack_on)
                s.display();
            else
                q.display();
            cout << "------------------------------------------" << endl;
            end=true;
            break;
        }

    }


    return 0;
}
