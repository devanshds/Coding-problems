#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,x,p,k,temp,ans=0;;
    cin>>n>>x>>p>>k;
    long long low=0,high=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp<x)
            low++;
        if(temp>x)
            high++;
    }
    if(low>p-1)
    {
        if(k<=low && low-k+1>=low-p+1)
            ans=low-p+1;
        else
            ans=-1;
    }
    else if(high>n-p)
    {
        if(k>n-high && k-n+high>=high-n+p)
            ans=high-n+p;
        else
            ans=-1;
    }
    cout<<ans<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
