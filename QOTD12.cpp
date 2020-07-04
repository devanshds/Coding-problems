/*
Given a LinkedList, rearrange the node values such that they appear in alternating:
low . -> high -> low . -> high -> low . -> high -> low . -> high

Input:

1 -> 2 -> 3 -> 4 -> 5

Output:

1 -> 3 -> 2 -> 5 -> 4
*/

#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* next;
};
void append(Node** head_ref, int data)
{
    Node* temp=new Node();
    Node* last=*head_ref;

    temp->data = data;
    temp->next = NULL;
    if(*head_ref==NULL)
    {
        *head_ref=temp;
        return;
    }
    while(last->next!=NULL)
        last=last->next;
    last->next = temp;
    return;
}
void printList(Node *node)
{
    while (node != NULL)
    {
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL\n";
}
void solve(Node* head, int n)
{
    Node *cur=head,*prev=head;
    cur=cur->next;
    while(cur && cur->next)
    {
        if(cur->data<prev->data)
            swap(cur->data,prev->data);
        if(cur->data<cur->next->data)
            swap(cur->data,cur->next->data);
        prev=cur->next;
        cur=prev->next;
    }
    printList(head);
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,temp;
    cin>>n;
    Node* head= NULL;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        append(&head,temp);
    }
    solve(head,n);
    return 0;
}
