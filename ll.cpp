#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node* next;
};
void insert(node **root,int value)
{
    node* temp;
    node* a;
    a->data=value;
    a->next=NULL;
    temp=*root;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=a;
}

void printlist(node **root)
{
    node* temp;
    temp=*root;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
int main()
{

    node *root= new node();

    int n;
    cin>>n;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        insert(&root,temp);
    }
    printlist(&root);

    return 0;
}
