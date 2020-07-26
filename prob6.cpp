/*
Q. Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.

After doing so, return the head of the final linked list.  You may return any such answer.


Input: head = [1,2,3,-3,4]
Output: [1,2,4]

Input: head = [3,1,2,-1,-2,4,1]
Output: [3,4,1]
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
void solve(Node *l1,Node *l2, int n1, int n2)
{
    Node* sum=NULL;
    int tot=0;
    while(l1 || l2)
    {
        int data1= l1 ? l1->data : 0;
        int data2= l2 ? l2->data : 0;
        tot+=data1+data2;
        append(&sum,tot%10);
        tot/=10;
        l1= l1 ? l1->next : l1;
        l2= l2 ? l2->next : l2;
    }
    if(tot)
    {
        append(&sum,tot);
    }
    printList(sum);

}

int main()
{

    Node* l=NULL;
    int n, temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        append(&l,temp);
    }
    solve(l,n);
    return 0;
}
