/*
Implementation of Binary Search Tree. Functions included are :
Traversal: Inorder, Preorder, Postorder;
Insert: Put operation
Size: Size of subtree
Rank: Rank of element in tree
Deletion: Hibbard Deletion
*/
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* left,right;
};

class BST
