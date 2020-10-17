#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,temp;
    cin>>n>>k;
    vector<int> q;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        q.push_back(temp);
    }
    if(n==1)
    {
        cout<<q[0]/k+1<<"\n";
        return;
    }
    int sum=0,ans=0,i;
    for(i=0;i<q.size();i++)
    {

        if(q[i]+sum<k)
        {
            ans=i+1;
            break;
        }
        sum+=q[i]-k;

    }
    if(ans==0)
    {
        ans=i+1+sum/k;
    }
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
