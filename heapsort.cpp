#include<bits/stdc++.h>
using namespace std;

class heap
{
public:
    void sink(vector<int> &a, int n, int i)
    {
            int j=i;
            if(2*i+1<n && a[j]<a[2*i+1])
                j=2*i+1;
            if(2*i+2<n && a[j]<a[2*i+2])
                j=2*i+2;
            if(j!=i)
            {
                swap(a[i],a[j]);
                sink(a,i,j);
            }
    }
    void heapsort(vector<int> &a, int &n)
    {
        for(int k=n/2-1;k>=0;k--)
            sink(a,n,k);
        for(int i=n-1;i>0;i--)
        {
            swap(a[0],a[i]);
            sink(a,i,0);
        }
    }

};

int main()
{
    int n,temp;
    heap h;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    h.heapsort(a,n);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
