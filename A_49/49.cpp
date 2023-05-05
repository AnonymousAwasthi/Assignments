#include<iostream>
using namespace std;

class Queue
{
  private:
        int capacity;
        int front;
        int rear;
        int *ptr;
  public:
    Queue(int);
    void insert(int);
    int viewRear();
    int viewFront();
    void deleteFront();
    ~Queue();
    bool IsFull();
    bool IsEmpty();
    int countElement();
    Queue(Queue&);
    Queue& operator=(Queue&);
};
Queue::Queue(int cap)
{
    capacity=cap;
    front=-1;
    rear=-1;
    if(cap>0)
    ptr=new int[capacity];
    else
        ptr=NULL;
}
void Queue::insert(int data)
{
    rear++;
    ptr[rear]=data;
    if(rear==0)
        front=0;
}
int Queue::viewRear()
{
    if(rear!=-1)
        return ptr[rear];
}
int Queue::viewFront()
{
    if(front!=-1)
        return ptr[front];
}
void Queue::deleteFront()
{
    front++;
}
Queue::~Queue()
{
    delete []ptr;
}
bool Queue::IsFull()
{
    if(front==0&&rear==capacity-1)
        return 1;
    else
        return 0;
}
bool Queue::IsEmpty()
{
    if(front==-1&&rear==-1)
        return 1;
    else
        return 0;
}
int countElement()
{
    return rear-front+1;
}
Queue::Queue(Queue &q)
{
    capacity=q.capacity;
    front=q.front;
    rear=q.rear;
    ptr=new int[capacity];
    for(int i=q.front;i<=q.rear;i++)
        ptr[i]=q.ptr[i];
}
Queue& Queue::operator=(Queue &q)
{
    delete []ptr;
    capacity=q.capacity;
    front=q.front;
    rear=q.rear;
    ptr=new int[capacity];
    for(int i=q.front;i<=q.rear;i++)
        ptr[i]=q.ptr[i];
    return *this;
}
int main()
{

}
