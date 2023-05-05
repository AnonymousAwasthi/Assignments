#include<iostream>
using namespace std;
#define Underflow 1
struct node
{		//use front and rear and DLL to create this DS
    int item;
    node *next;
};
class Queue
{
  private:
        node *front;
        node *rear;
  public:
    Queue();
    void insert(int);
    int viewRear();
    int viewFront();
    void deleteFront();
    ~Queue();
    Queue(Queue&);
    Queue& operator=(Queue&);
    int countElement();
};
Queue::Queue()
{
    front=NULL;
    rear=NULL;
}
void Queue::insert(int data)
{
    node *n;
    n=new node;
    n->item=data;
    n->next=rear;rear=n;
    if(front==NULL)
        front=n;
}
int Queue::viewRear()
{
    if(rear!=NULL)
        return rear->item;
    else
        throw Underflow;
}
int Queue::viewFront()
{
    if(front!=NULL)
        return front->item;
    else
        throw Underflow;
}
void Queue::deleteFront()
{
    if(front==NULL)
	throw Underflow;
    node *t;
    t=rear;
    while(t->next!=front||t->next)
        t=t->next;
    if(t->next)
    {
        t->next=NULL;
        delete front;
        front=t;
    }
    else
    {
        delete front;
        front=NUll;
        rear=NULL;
    }
}
Queue::~Queue()
{
    while(rear)
    {
        deleteFront();
    }
 }
Queue::Queue(Queue &q)
{
    Queue temp;
    node *t;
    t=q.rear;
    while(t)
    {
        temp.insert(int t->item);
        t=t->next;
    }
    t=temp.rear;
    while(t)
    {
        insert(int t->item);
        t=t->next;
    }


}
Queue& Queue::operator=(Queue &q)
{
    Queue temp;
    node *t;
    t=q.rear;
    while(t)
    {
        temp.insert(int t->item);
        t=t->next;
    }
    t=temp.rear;
    while(rear)
    {
        deleteFront();
    }
    while(t)
    {
        insert(int t->item);
        t=t->next;
    }
}
int Queue::countElement()
{
    int count=0;
    node*t;
    t=rear;
    while(t)
    {
        count++;
        t=t->next;
    }
    return count;
}
int main()
{

}
