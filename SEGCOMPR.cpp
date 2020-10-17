#include<bits/stdc++.h>
using namespace std;

#define ll long long int

const unsigned int mod = 998244353;

ll hsb(ll n)
{
    ll val=1;
    if(n==0)
        return 0;
    while(n>>=1)
        val<<=1;
    return val;
}

ll calc(vector<ll> &a, int l, int r)
{
    vector<ll> b;
    for(int i=l;i<=r;i++)
    {
        b.push_back(a[i]);
        cout<<a[i]<<" ";
    }
    sort(b.begin(),b.end());
    while(b.size()>1)
    {
        ll temp=hsb(b[0]^b[b.size()-1]);
        b.erase(b.begin(),b.begin()+1);
        b.pop_back();
        b.push_back(temp);
        sort(b.begin(),b.end());

    }

    cout<<" | "<<b[0]<<endl;
    return b[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    ll temp,ans=0;
    vector<ll> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            ans=(ans+calc(a,i,j))%mod;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
