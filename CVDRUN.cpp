#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    unordered_map<int,int> m;
    int t=x;
    bool ans=false;
    while(1)
    {
        if(m[t])
            break;
        else
            m[t]++;
        if(t==y)
        {
            ans=true;
            break;
        }
        t=(t+k)%n;
    }
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
