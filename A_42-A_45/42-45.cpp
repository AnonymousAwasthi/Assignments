#include<iostream>
#include<string.h>
using namespace std;
class DyArray
{
private:
        int capacity;
        int lastIndex;
        int *ptr;
public:
        DyArray()
        {
            ptr=NULL;
        }
        void doubleDyArray();
        void halfDyArray();
        DyArray(DyArray&);
        void createDyArray(int);
        void insert(int,int);
        void append(int);
        int getItem(int);
        bool IsEmpty();
        bool IsFull();
        void del(int);
        void edit(int,int);
        int count();
        int getcapacity();
        int find(int);
        void operator=(DyArray);
        ~DyArray()
        {
            delete []ptr;
        }
};
void DyArray::doubleDyArray()
        {
            int *temp;
            temp=new int[capacity*2];
            int i;
            for(i=0;i<capacity;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity*=2;
        }
void DyArray::halfDyArray()
{
          int *temp;
          temp=new int[capacity/2];
            int i;
            for(i=0;i<capacity/2;i++)
                temp[i]=ptr[i];
            delete []ptr;
            ptr=temp;
            capacity/=2;
}
DyArray::DyArray(DyArray &a)
{
    capacity=a.capacity;
    lastIndex=a.lastIndex;
    ptr=new int[capacity];
    int i;
    for(i=0;i<=lastIndex;i++)
        ptr[i]=a.ptr[i];
}
void DyArray::operator=(DyArray a)
{
    capacity=a.capacity;
    lastIndex=a.lastIndex;
    ptr=new int[capacity];
    int i;
    for(i=0;i<=lastIndex;i++)
        ptr[i]=a.ptr[i];
}
void DyArray::createDyArray(int x)
{
    capacity=x;
    if(ptr!=NULL)
	delete []ptr;
    ptr=new int[capacity];
    lastIndex=-1;
}
void DyArray::insert(int i,int y)
{
    if(lastIndex==capacity-1)
    {
        doubleDyArray();
        if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
        else
        {

                int j;
                for(j=lastIndex;j>=i;j--)
                {
                    ptr[j+1]=ptr[j];
                }
                ptr[i]=y;
                lastIndex++;

        }
    }
    else
    {
        if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
        else
        {
                int j;
                for(j=lastIndex;j>=i;j--)
                {
                    ptr[j+1]=ptr[j];
                }
                ptr[i]=y;
                lastIndex++;
        }
    }


}
void DyArray::append(int x)
{
    if(lastIndex==capacity-1)
    {
        doubleDyArray();
           ptr[lastIndex+1]=x;
               lastIndex++;
    }
    else
    {
       ptr[lastIndex+1]=x;
               lastIndex++;
    }


}
int DyArray::getItem(int i)
{
    if(i<0||i>capacity-1)
        {cout<<"Invalid Index"<<endl;return -1;}
    else
        return ptr[i];
}
bool DyArray::IsEmpty()
{
    return lastIndex==-1;
}
bool DyArray::IsFull()
{
    return lastIndex==capacity-1;
}
void DyArray::del(int i)
{
    if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
    else
    {
        int j;
        for(j=i+1;j<lastIndex;j++)
            ptr[j-1]=ptr[j];
        lastIndex--;
    }
        if(capacity>1 && lastIndex<=capacity/2-1)
            halfDyArray();

}
void DyArray::edit(int i,int x)
{
    if(i<0||i>capacity-1)
        cout<<"Invalid Index"<<endl;
    ptr[i]=x;
}
int DyArray::count()
{
    return lastIndex+1;
}
int DyArray::getcapacity()
{
    return capacity;
}
int DyArray::find(int x)
{
    int i;
    for(i=0;i<=lastIndex;i++)
    {
        if(ptr[i]==x)
            return i;
    }
    return -1;
}
struct node
{
    int item;
    node *next=NULL;
};
class Sll
{
private:
    node *start;
public:
    Sll();
    Sll(Sll&);
    void insertFirstNode(int);
    void insertAnotherNode(node*,int );
    void insertLastNode(int);
    node* Search(int);
    void deleteFirst();
    void deleteLast();
    void deletePerticular(node*);
    Sll& operator=(Sll&);
    ~Sll();

};
Sll::Sll()
{
    start=NULL;
}
Sll::Sll(Sll &s)
{
    if(s.start!=NULL)
    {
        node *t;
        t=s.start;//if inserted as first would be more efficient.
        start=NULL;
        while(t)
        {
            insertLastNode(t->item);
            t=t->next;
        }
    }
    else
        start=NULL;

}
Sll& Sll::operator=(Sll &s)
{
    node *t;
    t=s.start;
    while(start)
        deleteFirst();
    while(t)
    {
        insertLastNode(t->item);
        t=t->next;
    }
    return *this;
}
void Sll::insertFirstNode(int x)
{
        node *p=new node;
        p->item=x;
        p->next=start;
        start=p;
}
void Sll::insertLastNode(int x)
    {
        node *n=new node;
        n->item=x;
        n->next=NULL;
        if(start==NULL)
        {
            start=n;
        }
        else
        {
            node *t=start;
            while(t->next!=NULL)
            {
                t=t->next;
            }
            t->next=n;
        }
}
node* Sll::Search(int x)
{
    node *t;
    t=start;
    while(!t)
    {
       if(t->item!=x)
        {
            t=t->next;
        }
    }
    return t;

}
void Sll::insertAnotherNode(node *t,int x)
    {
        node *n=new node;
        n->item=x;
        n->next=t->next;
        t->next=n;

    }
void Sll::deleteFirst()
{
    if(start)
    {
        node *p;
        p=start->next;
        delete start;
        start=p;
    }
}
void Sll::deleteLast()
{
    if(start==NULL){}
    else if(start->next==NULL)
    {
        delete start;
        start=NULL;
    }
    else
    {
        node *t=start;
        while(t->next->next!=NULL)
        {
            t=t->next;
        }
        delete t->next;
        t->next=NULL;
    }
}
void Sll::deletePerticular(node *p)
{
    if(start==NULL)
    {
    }
    else if(start==p)
    {
        start=p->next;
        delete p;
    }
    else
    {
        node *t=start;
        while(t->next!=p)
            t=t->next;
        t->next=p->next;
        delete p;
    }
}
Sll::~Sll()
{
    while(start)
        deleteFirst();
}
struct nodeD
{
    nodeD *prev;
    int item;
    nodeD *next;
};
class Dll
{
    private:
        nodeD *start;
    public:
        void insertAtFirst(int);
        void insertAtLast(int);
        void insertAnother(nodeD*,int);
        void deleteFirst();
        void deleteLast();
        void deleteAnother(nodeD*);
};
void Dll::insertAtFirst(int x)
{
    nodeD *n;
    n=new nodeD;
    n->item=x;
    n->prev=NULL;
    n->next=start;
    if(start)
        start->prev=n;
    start=n;

}
void Dll::insertAtLast(int x)
{
    nodeD *t;
    t=start;
    nodeD *n;
    n=new nodeD;
    n->item=x;
    n->next=NULL;
    if(start==NULL)
        {
            start=n;
            n->prev=NULL;
        }
    else
    {while(t->next!=NULL)
    {
        t=t->next;
    }

    t->next=n;
    n->prev=t;}
}
void Dll::insertAnother(nodeD *p,int x)
{
    nodeD *n;
    n=new nodeD;
    n->item=x;
    n->next=p->next;
    n->prev=p;
    if(p->next)
        p->next->prev=n;
    p->next=n;
}
void Dll::deleteFirst()
{
    nodeD *temp;
    while(start)
    {
        temp=start->next;
        if(start->next)
            start->next->prev=NULL;
        delete start;
        start=temp;
    }

}
void Dll::deleteLast()
{
    nodeD *t;
    t=start;
    if(start==NULL)
        cout<<"List Underflow"<<endl;
    else
    {
        if(start->next==NULL)
            {
                delete start;
                start=NULL;
            }
        else
        {
            while(t->next)
                t=t->next;
            if(t->prev)
                t->prev->next=NULL;
            delete t;
        }
    }

}
void Dll::deleteAnother(nodeD *n)
{
    if(n==start)
        deleteFirst();
    else if(n->next==NULL)
        deleteLast();
    else
        {
            n->prev->next=n->next;
            n->next->prev=n->prev;
            delete n;
        }

}
struct nodeC
{
    int item;
    nodeC *next;
};
class Cll
{
private:
    nodeC *last;
public:
    Cll();
    void insertFirst(int);
    void insertLast(int);
    void insertAnother(nodeC*,int);
    nodeC* search(int);
    void deleteFirst();
    void deleteLast();
    void deleteAnother(nodeC*);
    ~Cll();
    Cll(Cll&);
    Cll& operator=(Cll&);
};
Cll::Cll()
{
    last=NULL;
}
void Cll::insertFirst(int x)
{
    nodeC *n;
    n=new nodeC;
    if(last)
    {
        n->next=last->next;
        last->next=n;
        n->item=x;
    }
    else
    {
        last=n;
        n->next=n;
        n->item=x;
    }

}
void Cll::insertLast(int x)
{
    nodeC *n;
    n=new nodeC;
    if(last)
    {
        n->item=x;
        n->next=last->next;
        last->next=n;
        last=n;
    }
    else
    {
        last=n;
        n->next=n;
        n->item=x;
    }
}
void Cll::insertAnother(nodeC *p,int x)
{
    nodeC *n;
    n=new nodeC;
    n->next=p->next;
    n->item=x;
    p->next=n;
}
nodeC* Cll::search(int x)
{
    nodeC *p;
    p=last;

    while(p->item!=x||p->next==last)
    {
       p=p->next;
    }
    if(p->item==x)
        return p;
    else
        return NULL;
}
void Cll::deleteFirst()
{
    nodeC *n;
    n=last->next;
    last->next=last->next->next;
    delete n;
}
void Cll::deleteLast()
{
    nodeC *p;
    p=last;
    while(p->next!=last)
        p=p->next;
    p->next=last->next;
    delete last;
    if(p==last)
        last=NULL;
    else
        last=p;
}
void Cll::deleteAnother(nodeC *n)
{
    nodeC *p;
    p=last;
    while(p->next!=n)
        p=p->next;
    p->next=n->next;
    delete n;
}
Cll::~Cll()
{
    while(last)
    {
        deleteLast();
    }
}
Cll::Cll(Cll &c)
{
    nodeC *t;
    t=c.last;
    while(t->next!=c.last)
    {
        insertFirst(t->item);
        t=t->next;
    }

}
Cll% Cll::operator=(Cll &c)
{
    nodeC *t;
    t=c.last;
    while(t->next!=c.last)
    {
        insertFirst(t->item);
        t=t->next;
    }
}
int main()
{

}
