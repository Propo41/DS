#ifndef QUEUE_H
#define QUEUE_H

using namespace std;

template <typename T>
class Queue
{
private:
    T *arr;
    int front, rear;
    int size;
public:
    Queue(int _size)
    {
        size=_size;
        arr=new T[size];
        front=-1, rear=-1;
    }

    bool isEmpty()
    {
        if(front==-1 && rear==-1)
            return true;
        return false;
    }

    void _insert(T n)
    {
        if(rear==size-1)
            cout << "Queue is full" << endl;

        else
        {
            if(front==-1)
                front=0;
            rear++;
            arr[rear]=n;
        }

    }

    void _delete()
    {
        if(isEmpty())
            cout << "Queue is empty" << endl;

        else
        {
            if(front==rear)
                front=-1, rear=-1;
            else
                front++;

        }
    }

    void display()
    {
        if(isEmpty())
            cout << "Queue is empty" <<  endl;

        else
        {
            for(int i=front; i<=rear; i++)
                cout << arr[i] << " ";

            cout << endl;
        }
    }



};






#endif // QUEUE_H
