#include<bits/stdc++.h>
using namespace std;

int PARTITION(vector<int> &a, int p, int r)
{
    int x=a[r]; //Pivot element
    int i=p-1;  //pointer for left subarray
    for(int j=p ;j<=r-1; j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void QUICKSORT(vector<int> &a, int p, int r)
{
    if(p<r)
    {
        int q=PARTITION(a,p,r);
        QUICKSORT(a,p,q-1);
        QUICKSORT(a,q+1,r);
    }
}

int main()
{
    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    QUICKSORT(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
