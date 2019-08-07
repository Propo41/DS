#ifndef toolkit_h
#define toolkit_h


struct Node
{
    int data;
    Node *nextNode;
};


class LinkedList
{

private:
    Node *head, *tail;
    int length, index;
    Node *arr[100];
public:
    LinkedList()
    {
        head=NULL;
        tail=NULL;
        length=0;
        index=0;
    }

    void pushBack(int value);
    void display();
    void reverseList();
    Node* findIndex(int l);
    int getLength()
    {
        return length;
    }
};


void LinkedList :: pushBack(int value)
{
    Node *node = new Node;
    node->data = value;
    node->nextNode=NULL;

    if(head==NULL)
    {
        head=node;
        tail=node;
    }
    else
    {

        tail->nextNode=node;
        tail=node;

    }
    arr[index]=node;
    index++;
    length++;
}

void LinkedList :: display()
{
    Node *temp = new Node;
    temp=head;

    while( temp!= NULL)
    {
        std:: cout << temp->data << " ";
        temp=temp->nextNode;
    }
    std::cout << std::endl;


}

void LinkedList :: reverseList()
{


    //UNCOMMENT THE FOLLOWING 9 LINES FOR APPROACH 1
    /* int temp;

     for(int i=0, j=length-1; i<length/2; i++, j--)
     {
         temp = arr[j]->data;
         arr[j]->data=arr[i]->data;
         arr[i]->data=temp;
     }
    */


    //UNCOMMENT THE FOLLOWING LINES FOR APPROACH 2 AND COMMENT THEM FOR 1
    Node *front = head;
    int t = length/2;
    int l = length-1;
    while(t--)
    {
        std::swap(front->data, findIndex(l)->data);
        front=front->nextNode;
        l--;
    }



}

//UNCOMMENT THE FOLLOWING LINES FOR APPROACH 2 AND COMMENT THEM FOR 1
Node* LinkedList :: findIndex(int l)
{
    Node *curr = new Node;
    curr=head;
    for(int i=0; i<l; i++)
        curr=curr->nextNode;

    return curr;
}


#endif // toolkit_h
