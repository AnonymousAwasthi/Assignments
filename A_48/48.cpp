#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class Stack
{
private:
    node *top;
public:
    Stack(){top=NULL;};
    void PUSH(int);
    int peekTop();
    void POP();
    ~Stack();
    Stack(Stack&);
    Stack& operator=(Stack&);
    void Reverse();
};
void Stack::PUSH(int data)
{
    node *n;
    n=new node;
    n->item=data;
        n->prev=NULL;
        n->next=top;
        top=n;
}
int Stack::peekTop()
{
    if(top)
    return top->item;
    else
        cout<<"stack underflow"<<endl;
}
void Stack::POP()
{
    if(top)
    {
        node *temp;
        temp=top;
        top=top->next;
        delete temp;
    }
    else
    {
        cout<<"stack underflow"<<endl;
    }
}
Stack::~Stack()
{
    while(top)
    {
        node *temp;
        temp=top;
        top=top->next;
        delete temp;
    }
}
Stack::Stack(Stack &s)
{
    node *t;
    s.Reverse();
    t=s.top;
    while(t)
    {
        PUSH(t->item);
        t=t->next;
    }
    s.Reverse();

}
Stack& Stack::operator=(Stack &s)
{
    node *t;
    if(top!=NULL)
    {
        while(top)
            POP();
    }
    s.Reverse();
    t=s.top;
    while(t)
    {
        PUSH(t->item);
        t=t->next;
    }
    s.Reverse();
    return *this;

}
void Stack::Reverse()
{
    Stack s;
    while(top)
    {
        s.PUSH(peekTop());
        POP();
    }
    top=s.top;
    s.top=NULL;//destructor will release memory when s will destroy
}
int main()
{

}
