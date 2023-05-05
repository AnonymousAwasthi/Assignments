#include<iostream>
using namespace std;
//using matrix representation
class graph
{
private:
    int v_count;
    int e_count;
    int **adj;
public:
    graph();
    void createGraph(int,int);
    void printGraph();
    void printAdjNode(int);
    bool isolatedNode(int);
    ~graph();
};
graph::graph()
{
    adj=NULL;
}
graph::~graph()
{
    for(int i=0;i<v_count;i++)
        delete []adj[i];
    delete []adj;
}
void graph::createGraph(int a,int b)
{
    int u,v;
    v_count=a;
    e_count=b;
    adj=new int*[a];
    for(int i=0;i<v_count;i++)
    {
        adj[i]=new int[a];
    }
    for(int i=0;i<v_count;i++)
        for(int j=0;j<v_count;j++)
            adj[i][j]=0;
    for(int i=0;i<e_count;i++)
    {
        cout<<"Enter nodes of edge number "<<i+1<<endl;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
}
void graph::printGraph()
{
    for(int i=0;i<v_count;i++)
        {
            for(int j=0;j<v_count;j++)
                cout<<adj[i][j]<<" ";
            cout<<endl;
        }
}
void graph::printAdjNode(int v_no)
{
    if(v_no<0 && v_no>=v_count)
        cout<<"invalid node"<<endl;
    else
    {
        for(int i=0;i<v_count;i++)
        {
            if(adj[v_no][i]==1)
                cout<<i<<" ";
        }
    }
}
bool graph::isolatedNode(int v_no)
{
    if(v_no<0 && v_no>=v_count)
        {
            cout<<"invalid node"<<endl;
            return -1;
        }
    else
    {
        int count=0;
        for(int i=0;i<v_count;i++)
        {
            if(adj[v_no][i]==1)
                count++;
        }
        if(count==0)
            return 1;
        else
            return 0;
    }
}
