#ifndef LINKED_LIST_H
#define LINKED_LIST_H



struct Node
{
    int data;
    Node *nextNode;

};

class LinkedList
{

private:
    Node *head, *tail;
    int length;
public:
    LinkedList()
    {
        head=NULL;
        tail=NULL;
        length=0;
    }

    void pushFront(int value);
    void pushBack(int value);
    void insertAt(int index, int value);

    void deleteFront();
    void deleteEnd();
    void deleteAt(int index);


    void display();
    int getLength()
    {
        return length;
    }


};


void LinkedList::display()
{
    Node *temp = new Node;
    temp=head;
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Displaying the values: ";
    while(temp!= NULL)
    {
        std::cout << temp->data << " ";
        temp=temp->nextNode;

    }
    std:: cout << std::endl;
    std::cout << "-------------------------------------------------------------" << std::endl;



}
void LinkedList :: pushBack(int value)
{

    Node *node = new Node;
    node->data=value;
    node->nextNode=NULL;

    if(head==NULL)
    {
        head=node;
        tail=node;
        node=NULL;
    }
    else
    {
        tail->nextNode=node;
        tail=node;
    }
    length++;


}

void LinkedList :: pushFront(int value)
{
    Node *node = new Node;
    node->nextNode=head;
    node->data=value;
    head=node;
    length++;

}

void LinkedList :: insertAt(int index,int value)
{
    Node *node = new Node;
    node->data=value;

    Node *previous = new Node;
    Node *current = new Node;
    current=head;

    for(int i=1; i<index; i++)
    {
        previous=current;
        current=current->nextNode;
    }

    previous->nextNode=node;
    node->nextNode=current;
    length++;

}


void LinkedList :: deleteFront()
{
    Node *temp = new Node;
    temp=head->nextNode;
    head=temp;
    delete temp;
    if(length>0)
        length--;

}


void LinkedList :: deleteEnd()
{
    Node *previous = new Node;
    Node *current = new Node;
    current = head;

    while(current->nextNode!=NULL)
    {
        previous=current;
        current=current->nextNode;
    }
    previous->nextNode=NULL;
    tail=previous;
    delete current;

    if(length>0)
        length--;

}

void LinkedList :: deleteAt(int index)
{

    Node *previous = new Node;
    Node *current = new Node;
    current = head;

    for(int i=1; i<index; i++)
    {
        previous = current;
        current = current->nextNode;
    }
    previous->nextNode = current->nextNode;

    if(length>0)
        length--;



}










#endif // LINKED_LIST_H
