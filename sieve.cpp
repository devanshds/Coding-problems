#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> sieve(n,0);
    for(int i=2;i<=n;i++)
    {
        if(sieve[i]) continue;
        for(int j=2*i;j<=n;j+=i)
            sieve[j]=i;
    }
    for(int i=1;i<=n;i++)
    {
        if(!sieve[i])
            cout<<i<<" ";
    }
    return 0;
}
