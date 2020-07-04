/*

QOTD #10
Add two Linked Lists that represent numbers:

54321 is represented as:

1 -> 2 -> 3 -> 4 -> 5
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Node* l1=NULL;
    Node* l2=NULL;
    int n1,n2, temp;
    cin>>n1>>n2;
    for(int i=0;i<n1;i++)
    {
        cin>>temp;
        append(&l1,temp);
    }
    for(int i=0;i<n2;i++)
    {
        cin>>temp;
        append(&l2,temp);
    }
    solve(l1,l2,n1,n2);
    return 0;
}


