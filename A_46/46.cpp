#include<iostream>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};
class CDLL
{
private:
    node *start;
public:
    CDLL()
    {
        start=NULL;
    }
    CDLL(CDLL&);
    CDLL& operator=(CDLL&);
    void insertAtFirst(int);
    void insertAtLast(int);
    node* searchdata(int);
    void insertAtspecific(node*,int);
    void deleteFirst();
    void deleteLast();
    void deleteSpecific(node*);
    ~CDLL();
    void show()
    {
        node *t;
        t=start;
        do
        {
            cout<<t->item<<endl;
            t=t->next;
        }while(t!=start);
    }
};
CDLL& CDLL::operator=(CDLL &c)
{
    if(c.start)
    {
        node *t;
        t=c.start;
        while(start)
            deleteFirst();
        do
        {
            insertAtLast(t->item);
            t=t->next;
        }while(t!=c.start);
        return *this;

    }
    else
        {start=NULL;return *this;}

}
CDLL::CDLL(CDLL &c)
{
    if(c.start)
    {
        node *t;
        t=c.start;
        do
        {
            insertAtLast(t->item);
            t=t->next;
        }while(t!=c.start);
    }
    else
        start=NULL;
}
CDLL::~CDLL()
{
    while(start)
        deleteFirst();
}
void CDLL::insertAtFirst(int x)
{
    node *n;
    n=new node;
    n->item=x;
    if(start==NULL)
    {
        n->prev=n;
        start=n;
        n->next=n;
    }
    else
    {
        n->next=start;
        n->prev=start->prev;
        start->prev->next=n;
        start->prev=n;
        start=n;
    }
}
void CDLL::insertAtLast(int data)
{
    node *n;
    n=new node;
    n->item=data;
    if(start)
    {
        n->next=start;
        start->prev->next=n;
        n->prev=start->prev;
        start->prev=n;
    }
    else
    {
        n->next=n;
        n->prev=n;
        start=n;
    }
}
void CDLL::insertAtspecific(node *t,int data)
{
    if(start==t)
    {
        insertAtFirst(data);
    }
    else
    {
        if(start->prev==t)
            insertAtLast(data);
        else
        {
            node *n;
            n=new node;
            n->item=data;
            n->next=t->next;
            t->next->prev=n;
            n->prev=t;
            t->next=n;
        }
    }
}
node* CDLL::searchdata(int data)
{
    node *t;
    if(start==NULL)
        return NULL;
    t=start;
    do
    {
        if(t->item==data)
            return t;
        t=t->next;
    }while(t!=start);
    return NULL;
}
void CDLL::deleteFirst()
{
    if(start)
    {
        if(start->next==start)
            {delete start;start=NULL;}
        else
        {
            start->next->prev=start->prev;
            start->prev->next=start->next;
            node *t;
            t=start->next;
            delete start;
            start=t;
        }
    }
    else
    {}
}
void CDLL::deleteLast()
{
    if(start)
    {
       if(start->next==start)
       {
           delete start;
           start=NULL;
       }
       else
        {
            start->prev->prev->next=start;
            node *t;
            t=start->prev;
            start->prev=start->prev->prev;
            delete t;
       }
    }
    else{}
}
void CDLL::deleteSpecific(node *t)
{
    if(t==start)
        deleteFirst();
    else
    {
        t->prev->next=t->next;
        t->next->prev=t->prev;
        delete t;
    }
}

int main()
{
    CDLL s;
    s.insertAtFirst(30);
    s.insertAtspecific(s.searchdata(30),24);
    s.insertAtLast(43);
    s.insertAtFirst(84);
    s.insertAtFirst(27);
    s.deleteFirst();
    CDLL k;
    s.show();
    k=s;
    k.show();
}
