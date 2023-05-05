#include<iostream>
using namespace std;
#define Underflow 1
#define NO_MATCH_FOUND 2
struct node
{
    int priority;
    int item;
    node *next;
};
class Priority_queue
{
private:
    node *start;
public:
    Priority_queue();
    void insertItem(int,int);
    void deleteItem(int);
    int getHprior();
    void deleteHprior();
    int getHPnum();
    ~Priority_queue();
    bool IsEmpty();
    Priority_queue(Priority_queue&);
    Priority_queue& operator=(Priority_queue&);
};
Priority_queue::Priority_queue()
{
    start=NULL;
} 
void insertItem(int data,int prior)
{
    node *n,*t;
    n=new node;
    n->item=data;
    n->priority=prior;
    t=start;
    if(t==NULL || t->priority<n->priority)
    {
        start=n;
        n->next=start;
    }
    else 
    {
        while(t->next)
        {
            if(t->next->priority<n->priority)
                break;
            t=t->next;
        }
        n->next=t->next;
        t->next=n;

    }
    
}
void Priority_queue::deleteItem(int prior)
{
    node *t;
     t=start;
    if(t==NULL)
    {
        throw Underflow;
    }
    else
    {
        while(t)
            {
                node *p;
                if(t->priority==prior)
                {
                    if(t==start)
                    {
                        start=t->next;
                        delete t;
                    }
                    else
                    {
                        p->next=t->next;
                        delete t;
                    }
                }
                p=t;
                t=t->next;
            }
        if(t==NULL)
        {
            throw NO_MATCH_FOUND;
        }
    }
}
int Priority_queue::getHprior()
{
    if(start)
    {
        return start->item;
    }
    else
    {
        throw Underflow;
    }

}
void Priority_queue::deleteHprior()
{
    if(start)
    {   node *t=start->next;
        delete start;
        start=t;
    }
    else
     throw Underflow;
}
int Priority_queue::getHPnum()
{
    if(start)
    return start->priority;
    else
        return Underflow;
}
Priority_queue::~Priority_queue()
{
    node *t;
    t=start;
    while(t)
    {
        node *p;
        p=t;
        t=t->next;
        delete p;
    }
    start=NULL;
}
bool Priority_queue::IsEmpty()
{
    if(start)
        return 0;
    else
        return 1;
}
Priority_queue::Priority_queue(Priority_queue &p)
{
    node *t;
    start=NULL;
    t=p.start;
    while(t)
    {
        insertItem(t->item,t->priority);
        t=t->next;
    }
}
Priority_queue& Priority_queue::operator=(Priority_queue &p)
{
    node *t;
    t=start;
    while(t)
    {
        node *p;
        p=t;
        t=t->next;
        delete p;
    }
    start=NULL;
    t=p.start;
    while(t)
    {
        insertItem(t->item,t->priority);
        t=t->next;
    }
}
