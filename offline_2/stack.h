#ifndef STACK_H
#define STACK_H

using namespace std;

template <typename T>
class Stack
{
private:
    int top;
    int size;
    T *arr;
public:
    Stack(int _size)
    {
        size=_size;
        arr = new T[size];
        top=-1;
    }

    bool isEmpty()
    {
        if(top==-1)
            return true;
        return false;

    }
    void push(T n)
    {
        if(top<size)
        {
            top++;
            arr[top]=n;
        }

    }

    void pop()
    {
        if(!isEmpty())
        {
            top--;
        }
        else
        {
            cout << "Stack already emptied" << endl;
        }

    }

    void display()
    {
        if(isEmpty())
            cout << "Stack empty" << endl;
        else
        {
            for(int i=0; i<=top; i++)
                cout << arr[i] << " ";

            cout << endl;
        }
    }


};



#endif // STACK_H
