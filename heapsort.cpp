#include<bits/stdc++.h>
using namespace std;

int heap_size=0;

void MAX_HEAPIFY(vector<int> &a, int i)
{
    int l=2*i + 1;
    int r=l+1;
    int largest=0;
    if(l<heap_size && a[l]>a[i])
        largest=l;
    else
        largest=i;
    if(r<heap_size && a[r]> a[largest])
        largest=r;
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        MAX_HEAPIFY(a,largest);
    }
}

void BUILD_MAX_HEAP(vector<int> &a, int n)
{
    for(int i=n/2-1;i>=0;i--)  //zero indexing messes everything
    {
        MAX_HEAPIFY(a,i);
    }
}

void HEAPSORT(vector<int> &a,int n)
{
    BUILD_MAX_HEAP(a,n);
    for(int i=n-1; i>0;i--)
    {
        swap(a[0],a[i]);
        heap_size--;
        MAX_HEAPIFY(a,0);
    }
}

int main()
{
    int n,temp;
    cin>>n;
    heap_size=n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    HEAPSORT(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
