#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int g;
    cin>>g;
    while(g--)
    {
        int i,n,q;
        cin>>i>>n>>q;
        if(n%2==0)
            cout<<n/2;
        else
        {
            if(q==i)
                cout<<n/2;
            else
                cout<<n/2+1;
        }
        cout<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
