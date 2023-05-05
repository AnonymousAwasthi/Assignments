#include<iostream>
#include<queue>
using namespace std;
//list representation of graph
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
            while(t->next)
            {
                t=t->next;
            }
            node *n;
            n=new node;
            n->next=NULL;
            n->n_value=b;
            t->next=n;
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
    int* adjValue(int a)
    {
        node *t=start;
        int i=1;
        int *n;
        if(t)
            n=new int[i];
        else
            return NULL;
        while(t)
        {
            *(n+i-1)=t->n_value;
            t=t->next;
            if(t)
            {
                i++;
                int *k;
                k=new int[i];
              for(int y=0;y<i-1;y++)
                *(k+y)=*(n+y);
              delete []n;
              n=k;
              k=NULL;
            }
        }
        return n;
    }
    int n_count()
    {
        int count=0;
        node *t;
        t=start;
        while(t)
        {
            count++;
            t=t->next;
        }
        return count;
    }
};
class graph
{
private:
    int v_count;
    adjlist *arr;
public:
    graph();
    int countNode(int);
    void creategraph(int);
    void addEdge(int,int);
    ~graph();
    void printGraph();
    int* AdjNode(int);
    void BFS(int );
};
int graph::countNode(int a)
{
    return (arr+a)->n_count();
}
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
    if(b<v_count&&a<v_count)
    (arr+a)->updateEdge(b);
}
graph::~graph()
{
    delete []arr;
}
void graph::printGraph()
{
    for(int i=0;i<v_count;i++)
        {
            cout<<i<<"->";
            (arr+i)->printValue();
        }
}
int* graph::AdjNode(int a)
{
    if(a<v_count)
    (arr+a)->adjValue(a);
}
void graph::BFS(int src_node)
{
    queue <int>q;
    bool arr[v_count]={0};
    q.push(src_node);
    arr[src_node]=true;
    while(!q.empty())
    {
        int n=q.front();
        cout<<n<<" ";
        q.pop();
        for(int i=0;i<countNode(n);i++)
            {
                if(arr[*(AdjNode(n)+i)]==false)
                {
                    q.push(*(AdjNode(n)+i));
                    arr[*(AdjNode(n)+i)]=true;
                }
            }

    }
}
int main()
{
    graph gr;
    gr.creategraph(5);
    gr.addEdge(0,1);
    gr.addEdge(0,2);
    gr.addEdge(1,0);
    gr.addEdge(1,2);
    gr.addEdge(1,3);
    gr.addEdge(1,4);
    gr.addEdge(2,0);
    gr.addEdge(2,1);
    gr.addEdge(2,3);
    gr.addEdge(3,1);
    gr.addEdge(3,2);
    gr.addEdge(3,4);
    gr.addEdge(3,5);
    gr.addEdge(4,1);
    gr.addEdge(4,3);
    gr.addEdge(4,5);
    gr.addEdge(5,4);
    gr.addEdge(5,3);
    gr.printGraph();
    int c=gr.countNode(0);
    cout<<endl<<c<<endl;
    gr.BFS(1);
}
