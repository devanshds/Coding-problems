#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1000000;

long long power(long long x, long long n)
{
    long long result = 1;
    while (n) {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}

void solve()
{
    int n,temp;
    cin>>n;
    int a[n+1] = {0};
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a[temp]++;
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
