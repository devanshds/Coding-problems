/*
	Q. Given the Head of a linked list, reverse the linked list in-place.
	In-place: reverse the same list, don't return a new list

*/
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
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

void reverse(Node** head_ref)
{
    Node* curr=*head_ref;
    Node *prev=NULL,*nxt=NULL;
    while(curr!=NULL)
    {
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }
    *head_ref=prev;
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
int main()
{
    Node* head=NULL;
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        append(&head,temp);
    }
    printList(head);
    reverse(&head);
    printList(head);

    return 0;
}
