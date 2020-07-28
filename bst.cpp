/*
Implementation of Binary Search Tree. Functions included are :
Traversal: Inorder, Preorder, Postorder
Insert: Put operation
Search: get method looks up value
Size: Size of subtree
Rank: Rank of element in tree
Deletion: Hibbard Deletion
*/
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val,count;
    node *left,*right;
    node(int value): val(value),left(NULL),right(NULL),count(1) {} //Initialization list
};

class BST
{
    node* root;
    node* insert(node*, int);
    void preorder(node*);
    void inorder(node*);
    void postorder(node*);
    node* getMin(node*);
    node* getMax(node*);
    int getSize(node*);
public:
    BST() : root(NULL) {}
    int getMin()
    {
        node* temp;
        temp=getMin(root);
        return temp->val;
    }
    int getMax()
    {
        node* temp;
        temp=getMax(root);
        return temp->val;
    }
    int getSize()
    {
        return getSize(root);
    }
    bool get(int value)
    {
        node* x=root;
        while(x!=NULL)
        {
            if( value < x->val )
                x=x->left;
            else if( value > x->val )
                x=x->right;
            else if ( value == x->val )
                return true;
        }
        return false;
    }
    void insert(int value)      //polymorphism function overloading
    {
        root=insert(root,value);
    }
    void preorder()
    {
        preorder(root);
    }
    void inorder()
    {
        inorder(root);
    }
    void postorder()
    {
        postorder(root);
    }
};

node* BST::insert(node* x, int value)
{
    if(!x)
        return new node(value);
    if( value < x->val )
        x->left=insert(x->left, value);
    else if( value > x->val)
        x->right=insert(x->right, value);

    x->count=1+getSize(x->left)+getSize(x->right);
    //missing condition for duplicates
    return x;
}
node* BST::getMin(node* x)
{
    if(!x)
        return NULL;
    else
    {
        while(x->left)
        {
            x=x->left;
        }
        return x;
    }
}
node* BST::getMax(node* x)
{
    if(!x)
        return NULL;
    else
    {
        while(x->right)
        {
            x=x->right;
        }
        return x;
    }
}
int BST::getSize(node* x)
{
    if(x==NULL)
        return 0;
    return x->count;
}
void BST::preorder(node* x)
{
    if(!x)
        return;
    cout<<x->val<<" ";
    preorder(x->left);
    preorder(x->right);
}
void BST::inorder(node* x)
{
    if(!x)
        return;
    inorder(x->left);
    cout<<x->val<<" ";
    inorder(x->right);
}
void BST::postorder(node* x)
{
    if(!x)
        return;
    postorder(x->left);
    postorder(x->right);
    cout<<x->val<<" ";
}
int main()
{
    BST bst;
    bst.insert(10);
    bst.insert(4);
    bst.insert(12);
    bst.insert(6);
    bst.insert(11);
    bst.preorder();
    cout<<"\n";
    bst.inorder();
    cout<<"\n";
    bst.postorder();
    cout<<"\n";
    cout<<"Min: "<<bst.getMin()<<"\nMax: "<<bst.getMax()<<"\n";
    cout<<"Size: "<<bst.getSize()<<"\n";
    cout<<"No errors so far";
    return 0;
}
