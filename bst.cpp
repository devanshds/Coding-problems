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
    int val;
    node *left,*right;
    node(int value): val(value),left(NULL),right(NULL) {} //Initialization list
};

class BST
{
    node* root;
    node* insert(node*, int);
    void preorder(node*);
public:
    BST() : root(NULL) {}

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
};

node* BST::insert(node* x, int value)
{
    if(!x)
    {
        return new node(value);
    }
    else
    {
        if( value < x->val )
        {
            x->left=insert(x->left, value);
        }
        else if( value > x->val)
        {
            x->right=insert(x->right, value);
        }
        else if(value == x->val);
        {
            x->left=insert(x->left,value);
        }
    }
    return x;
}
void BST::preorder(node* x)
{

}
int main()
{
    BST bst;
    bst.insert(5);
    bst.insert(6);
    cout<<"No errors so far";
    return 0;
}
