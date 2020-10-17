#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define SIZE (ll)(1e6)

ll parent[SIZE],rnk[SIZE];

ll find(ll i)
{
    while (parent[i] != i)
        i = parent[i];
    return i;
}
void union1(ll a, ll b)
{
    if(rnk[a]<rnk[b])
    {
        parent[a]=b;
        rnk[b]+=rnk[a];
    }

    else
    {
        parent[b]=a;
        rnk[a]+=rnk[b];
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,d,ans =0;
    cin>>n>>d;

    vector<vector<ll>> a(n,vector<ll>(d));
    priority_queue<vector<ll>> q;
    //input
    for(int i=0;i<n;i++)
        for(int j=0;j<d;j++)
            cin>>a[i][j];
    //calc distance
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll weight=0;
            for(int k=0;k<d;k++)
            {
                weight+= abs(a[i][k]-a[j][k]);
            }
            q.push({weight,i,j});
        }
    }
    //initialize parents
    for (ll i = 0; i <=n; i++)
    {
        parent[i] = i;
        rnk[i]=1;
    }
    while(!q.empty())
    {
        vector<ll> tp=q.top();
        q.pop();
        ll a=find(tp[1]),b=find(tp[2]);
        if(a!=b)
        {
            union1(a,b);
            ans+=tp[0];
        }
        else if(rnk[a]==n)
            break;
    }

    cout<<ans<<"\n";
    return 0;
}
