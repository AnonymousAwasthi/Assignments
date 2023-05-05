#include<iostream>
using namespace std;
#define EMPTY_TREE 1
#define DATA_NOT_FOUND 2
struct node
{
    node *left;
    int item;
    node *right;
};
class BST
{
private:
    node *root;
    void travPo(node*);
    void travPr(node*);
    void travIn(node*);
    void copy(BST&,node*);
public:
    BST();
    bool IsEmpty();
    void insertItem(int);
    void preTrv();
    void inTrv();
    void postTrv();
    void delNode(int);
    node* search(int);
    ~BST();
    BST(BST&);
    BST& operator=(BST&);
};
BST::BST()
{
    root=NULL;
}
bool BST::IsEmpty()
{
    return !root;
}
void BST::insertItem(int data)
{
    node *t;
    t=root;
    while(t)
    {
        if(t->item==data)
            break;
        if(t->item>data)
        {
            if(t->right)
                t=t->right;
            else
                {
                    node *n=new node;
                    n->item=data;
                    n->right=NULL;
                    n->left=NULL;
                    t->right=n;t=NULL;}
        }
        else
        {
            if(t->left)
                t=t->left;
            else
                {
                    node *n=new node;
                    n->item=data;
                    n->right=NULL;
                    n->left=NULL;
                    t->left=n;t=NULL;}
        }
    }
    if(root==NULL)
        {
            node *n=new node;
            n->item=data;
            n->right=NULL;
            n->left=NULL;
            root=n;
        }
}
void BST::travPr(node *t)
    {
        if(t)
        {
            travPr(t->left);
            travPr(t->right);
            cout<<t->item<<",";
        }
    }
void BST::preTrv()
{
    node *t;
    t=root;
    travPr(t);
    if(root==NULL)
        throw EMPTY_TREE;
}
void BST::travIn(node *t)
    {
        if(t)
        {
            travIn(t->left);
            cout<<t->item<<",";
            travIn(t->right);
        }

    }
void BST::inTrv()
{
    node *t;
    t=root;
    travIn(t);
    if(root==NULL)
        throw EMPTY_TREE;
}
void BST::travPo(node *t)
    {
        if(t)
        {
            cout<<t->item<<",";
            travPo(t->left);
            travPo(t->right);
        }

    }
void BST::postTrv()
{
    node *t;
    t=root;
    travPo(t);
    if(root==NULL)
        throw EMPTY_TREE;
}
void BST::delNode(int data)
{
    node *t,*pt=NULL;
    t=root;
    while(t)
    {
        if(t->item>data)
        {
            pt=t;
           t=t->left;
        }

        else if(t->item<data)
        {
            pt=t;
            t=t->right;
        }

        else
        {
            if(t->left==NULL || t->right==NULL)
            {
                if(t->left==NULL && t->right==NULL)
                {
                    if(pt)
                    {
                        if(pt->left==t)
                            pt->left=NULL;
                        if(pt->right==t)
                            pt->right=NULL;
                    }
                    else
                    {
                        root=NULL;
                    }
                    delete t;
                    break;
                }
                else
                {
                    if(t->left==NULL)
                    {
                        if(pt)
                        {
                            if(pt->left==t)
                            {
                                pt->left=t->right;
                                delete t;
                                break;
                            }
                            if(pt->right==t)
                            {
                                pt->right=t->right;
                                delete t;
                                break;
                            }
                        }
                        else
                        {
                            root=t->right;
                            delete t;
                            break;
                        }
                    }
                    if(t->right==NULL)
                    {
                        if(pt)
                        {
                            if(pt->left==t)
                            {
                                pt->left=t->left;
                                delete t;
                                break;
                            }
                            if(pt->right==t)
                            {
                                pt->right=t->left;
                                delete t;
                                break;
                            }
                        }
                        else
                        {
                            root=t->left;
                            delete t;
                            break;
                        }
                    }
                }
            }
            else
            {
                node *temp=t->right;
                while(temp->left)
                    {
                        pt=temp;
                        temp=temp->left;
                    }
                t->item=temp->item;
                if(pt)
                {
                    pt->left=temp->right;
                    delete temp;
                    break;
                }
                else
                {
                    pt->left=temp->right;
                    delete temp;
                    break;
                }

            }
        }
    }
}
node* BST::search(int data)
{
    if(root==NULL)
        throw EMPTY_TREE;
    else
    {
        node *t=root;
        while(t)
        {
            if(t->item==data)
                return t;
            else if(t->item>data)
                t=t->left;
            else
                t=t->right;
        }
        throw DATA_NOT_FOUND;
    }
}
BST::~BST()
{
    while(root)
        delNode(root->item);
}
void BST::copy(BST &b,node *t)
{
    if(t)
    {
        b.insertItem(t->item);
        copy(b,t->left);
        copy(b,t->right);
    }
}
BST& BST::operator=(BST &bst)
{
    while(root)
        delNode(root->item);
    bst.copy(*this,bst.root);
}
BST::BST(BST &bst)
{
    root=NULL;
    bst.copy(*this,bst.root);
}
