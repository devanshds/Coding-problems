#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,temp;
    cin>>n;
    long long sum=0,ans=0;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        a.push_back(a[i]);
    }
    sum=a[0]+a[1]+a[2];
    ans=sum;

    for(int i=3,left=0;i<n;i++)
    {
        sum+=a[i]-a[left];
        left++;
        ans=max(ans,sum);
    }
    cout<<ans;
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
