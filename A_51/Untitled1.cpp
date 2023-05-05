#include<iostream>
using namespace std;
#define Underflow 1
struct node
{
    node *prev;
    int item;
    node *next;
};
class Deque
{
  private:
        node *front;
        node *rear;
  public:
    Deque();
    void insertFront(int);
    void insertRear(int);
    int getRear();
    int getFront();
    void deleteFront();
    void deleteRear();
    ~Deque();
    Deque(Deque&);
    Deque& operator=(Deque&);
    int countElement();
};
Deque::Deque()
{
    front=NULL;
    rear=NULL;
}
void Deque::insertFront(int data)
{
    node *n;
    n=new node;
    n->item=data;
    n->next=NULL;
    if(front)
        {n->prev=front;front->next=n;}
    else
        rear=n;
    front=n;
}
void Deque::insertRear(int data)
{
    node *n;
    n=new node;
    n->item=data;
    n->prev=NULL;
    if(rear)
        {n->next=rear;rear->prev=n;}
    else
        front=n;
    rear=n;
}
int Deque::getRear()
{
    if(rear)
        return rear->item;
    else
        throw Underflow;
}
int Deque::getFront()
{
    if(front)
        return front->item;
    else
        throw Underflow;
}
void Deque::deleteFront()
{
    if(front==NULL)
	throw Underflow;
    node *t;
    t=front->prev;
    if(front->prev)
    {
        front->prev->next=NULL;
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
void Deque::deleteRear()
{
    if(rear==NULL)
	throw Underflow;
    node *t;
    t=rear->next;
    if(rear->next)
    {
        rear->next->prev=NULL;
        delete rear;
        rear=t;
    }
    else
    {
        delete rear;
        front=NUll;
        rear=NULL;
    }
}
Deque::~Deque()
{
    while(rear)
    {
        deleteFront();
    }
}
Deque::Deque(Deque &q)
{
    node *t;
    t=q.rear;
    while(t)
    {
        insertFront(int t->item);
        t=t->next;
    }
    if(q.rear==NULL)
	front=rear=NULL;


}
Deque& Deque::operator=(Deque &q)
{
    node *t;
    t=q.rear;
    while(rear)
    {
        deleteFront();
    }
    while(t)
    {
        insertFront(int t->item);
        t=t->next;
    }
}
int Deque::countElement()
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
