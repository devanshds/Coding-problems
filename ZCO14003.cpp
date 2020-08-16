#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    long long ans=0;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        long long val;
        val = a[i]*(n-i);
        if(val > ans)
            ans=val;
    }
    cout<<ans;
    return 0;
}
// 3 21 33 40 65
