#include<iostream>
using namespace std;
//linked representation of graph
struct node
{
    int n_value;
    node *next;
};
class adjlist
{
private:
    node *start;
public:
    void updateEdge(int b)
    {
        if(start)
        {
            node *t=start;
            while(t)
            {
                t=t->next;
            }
            node *n;
            n=new node;
            n->next=NULL;
            n->n_value=b;
            t=n;
        }
        else{
            node *n;
            n=new node;
            n->n_value=b;
            n->next=NULL;
            start=n;
        }
    }
    adjlist()
    {
        start=NULL;
    }
    ~adjlist()
    {
        while(start)
        {
            node *temp;
            temp=start;
            start=start->next;
            delete temp;
        }
    }
    void printValue()
    {
        node *t=start;
        while(t)
        {
            cout<<t->n_value<<" ";
            t=t->next;
        }
        cout<<endl;
    }
};
class graph
{
private:
    int v_count;
    adjlist *arr;
public:
    graph();
    void creategraph(int);
    void addEdge(int,int);
    ~graph();
    void printGraph();
    void printAdjNode(int);
};
graph::graph()
{
    arr=NULL;
}
void graph::creategraph(int a)
{
    v_count=a;
    arr=new adjlist[a];
}
void graph::addEdge(int a,int b)
{
    (arr+a)->updateEdge(b);
}
graph::~graph()
{
    delete []arr;
}
void graph::printGraph()
{
    for(int i=0;i<v_count;i++)
        (arr+i)->printValue();
}
void graph::printAdjNode(int a)
{
    (arr+a)->printValue();
}
