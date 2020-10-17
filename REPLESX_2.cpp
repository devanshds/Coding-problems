
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int p, int r)
{
    int x=a[r], i=p-1;
    for(int j=p;j<r;j++)
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

int randomized_partition(vector<int> &a, int p, int r)
{
    int i =p + rand() % (r-p+1);
    swap(a[i],a[r]);
    return partition(a,p,r);
}

int randomized_select(vector<int> &a, int p, int r, int i)
{
    if(p==r)
        return a[p];
    int q=randomized_partition(a,p,r);
    int k= q - p +1;
    if(i==k)
        return a[q];
    else if (i<k)
        return randomized_select(a,p,q-1,i);
    else
        return randomized_select(a,q+1,r,i-k);

}

void solve()
{
    int n, x, p, k, temp,ans=0;
    cin>>n>>x>>p>>k;
    vector<int> a;
    unordered_map<int,vector<int>> m;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
        m[temp].push_back(i);
    }
    int pi,ki,pv,kv;
    pv=randomized_select(a,0,n-1,p);
    kv=randomized_select(a,0,n-1,k);
    pi= m[pv];
    ki= m[kv];
    for(ans=0;a[pi]!=x && ans<n;ans++)
    {
        m.erase(a[ki]);
        a[ki]=x;
        m[x].push_back(ki);
        pv=randomized_select(a,0,n-1,p);
        kv=randomized_select(a,0,n-1,k);
    }
    if(ans==n)
        cout<<"-1\n";
    else
        cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
