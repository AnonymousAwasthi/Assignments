#include<iostream>
using namespace std;
#define EMPTY_TREE 1
struct node
{
    node *left;
    int item;
    node *right;
    int height;
};
class AVL
{
private:
    node *root;
    int getHeight(node*);
    int max(int,int);
    node* insertion(node*,int);
    node* deletion(node*,int);
    node* getNode(node*,int);
public:
    AVL();
    int getBalFac(node*);
    node* leftRotate(node*);
    node* rightRotate(node*);
    void insertItem(int);
    void deleteItem(int);
    void preTrav(node*);
    void inTrav(node*);
    void postTrav(node*);
    node* Search(int);
    ~AVL();
};
AVL::AVL()
{
    root=NULL;
}
AVL::~AVL()
{
    while(root)
        deleteItem(root->item);
}
int AVL::getBalFac(node *p)
{
    if(root==NULL)
        throw EMPTY_TREE;
    else
        return p->left->height-p->right->height;
}
node* AVL::leftRotate(node *a)
{
    node *b=a->right;
    if(root==NULL)
        throw EMPTY_TREE;
                    a->right=b->left;
                    b->left=a;
                    b->right->height=getHeight(b->right);
                        b->left->height=getHeight(b->left);
                        b->height=getHeight(b);
                    return b;
}
node* AVL::rightRotate(node *a)
{
    node *b=a->left;
    if(root==NULL)
        throw EMPTY_TREE;
     a->left=b->right;
     b->right=a;
     b->right->height=getHeight(b->right);
     b->left->height=getHeight(b->left);
     b->height=getHeight(b);
     return b;
}
node* AVL::insertion(node *ptr,int data)
{
    node *n;
    n=new node;
    n->left=n->right=NULL;
    n->item=data;
    n->height=1;
    if(ptr==NULL)
        ptr=n;
    else if(ptr->item>data)
        insertion(ptr->left,data);
    else if(ptr->item<data)
        insertion(ptr->right,data);
    else if(ptr->item==data)
        return ptr;

    ptr->height=getHeight(ptr);
    if(getBalFac(ptr)>1&& data>ptr->left->item)
    {
        leftRotate(ptr->left);
        return rightRotate(ptr);
    }
    else if(getBalFac(ptr)>1&& data<ptr->left->item)
        return rightRotate(ptr);
    else if(getBalFac(ptr)<-1&& data>ptr->right->item)
        return leftRotate(ptr);
    else if(getBalFac(ptr)<-1 && data<ptr->right->item)
        {
            rightRotate(ptr->right);
            return leftRotate(ptr);
        }

        return ptr;
}
void AVL::insertItem(int data)
{
    root=insertion(root,data);
}
node* AVL::deletion(node *ptr,int data)
{
    if(ptr==NULL)
        return ptr;
    else if(ptr->item==data)
    {
        if(ptr->left!=NULL && ptr->right!=NULL)
        {
            node *t;
            t=ptr->right;
            while(t->left)
                t=t->left;
            ptr=deletion(ptr,t->item);
        }
        else if(ptr->right!=NULL && ptr->left==NULL)
        {
            node *temp=ptr;
            ptr=ptr->right;
            delete temp;
        }
        else if(ptr->right==NULL && ptr->left!=NULL)
        {
            node *temp=ptr;
            ptr=ptr->left;
            delete temp;
        }
        else
            {
                delete ptr;
                ptr=NULL;
            }
    }
    else if(ptr->item>data)
        ptr->left=deletion(ptr->left,data);
    else if(ptr->item<data)
        ptr->right=deletion(ptr->right,data);
        if(ptr->right)
            ptr->right->height=getHeight(ptr->right);
        if(ptr->left)
            ptr->left->height=getHeight(ptr->left);
        if(ptr)
            ptr->height=getHeight(ptr);
    if(getBalFac(ptr)>1&& data>ptr->left->item)
    {
        leftRotate(ptr->left);
        return rightRotate(ptr);
    }
    else if(getBalFac(ptr)>1&& data<ptr->left->item)
        return rightRotate(ptr);
    else if(getBalFac(ptr)<-1&& data>ptr->right->item)
        return leftRotate(ptr);
    else if(getBalFac(ptr)<-1 && data<ptr->right->item)
        {
            rightRotate(ptr->right);
            return leftRotate(ptr);
        }
        return ptr;
}
void AVL::deleteItem(int data)
{
    root=deletion(root,data);
}
int AVL::max(int a,int b)
{
    return a>b?a:b;
}
int AVL::getHeight(node *t)
{
    if(t)
        return max(getHeight(t->left),getHeight(t->right))+1;
    else
        return 0;
}
void AVL::preTrav(node *ptr)
{
    if(ptr)
    {
        cout<<ptr->item<<" ";
        preTrav(ptr->left);
        preTrav(ptr->right);
    }
}
void AVL::inTrav(node *ptr)
{
    if(ptr)
    {
        preTrav(ptr->left);
        cout<<ptr->item<<" ";
        preTrav(ptr->right);
    }
}
void AVL::postTrav(node *ptr)
{
    if(ptr)
    {
        preTrav(ptr->left);
        preTrav(ptr->right);
        cout<<ptr->item<<" ";
    }
}
node* AVL::getNode(node *ptr,int data)
{
    if(ptr->item==data)
        return ptr;
    else if(data>ptr->item)
        getNode(ptr->right,data);
    else if(data<ptr->item)
        getNode(ptr->left,data);
}
node* AVL::Search(int data)
{
    return getNode(root,data);
}
