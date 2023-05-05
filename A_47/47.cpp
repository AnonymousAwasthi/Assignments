#include<iostream>
using namespace std;
#define STACK_IS_EMPTY 1
class Stack
{
private:
    int capacity;
    int top;
    int *ptr;
public:
    Stack(int);
    void PUSH(int);
    int peekTop();
    void POP();
    ~Stack();
    bool underflow();
    bool overflow();
    Stack(Stack&);
    Stack& operator=(Stack&);
};
Stack::Stack(int x)
{
    capacity=x;
    ptr=new int[capacity];
    top=-1;
}
void Stack::PUSH(int data)
{
    if(top==capacity-1)
        cout<<"overflow"<<endl;
    else
        {ptr[top+1]=data;top++;}
}
int Stack::peekTop()
{
    if(top==-1)
        throw STACK_IS_EMPTY;
    return ptr[top];
}
void Stack::POP()
{
    if(top==-1)
        cout<<"underflow"<<endl;
    else
        top--;
}
Stack::~Stack()
{
    if(ptr!=NULL)
    delete []ptr;
}
bool Stack::underflow()
{
    return top==-1;
}
bool Stack::overflow()
{
    return top==capacity-1;
}
Stack::Stack(Stack &s)
{
    capacity=s.capacity;
    ptr=new int[capacity];
    top=s.top;
    for(int i=0;i<=top;i++)
        ptr[i]=s.ptr[i];
}
Stack& Stack::operator=(Stack &s)
{
    capacity=s.capacity;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[capacity];
    top=s.top;
    for(int i=0;i<=top;i++)
        ptr[i]=s.ptr[i];
    return *this;

}
int main()
{

}
