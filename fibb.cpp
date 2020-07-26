/* Calculate fibonacci of a number using Memoization.
Memoization brings down the complexity from powers of 2 to linear and its the first exammple for dynamic programming*/
#include<iostream>
#include<unordered_map>
using namespace std;
typedef long long ll;

class fibonacci
{
    unordered_map<ll,ll> m;
public:
    fibonacci()
    {
        m[0]=0;
        m[1]=1;
        m[2]=2;
    }
    ll fib_mem(ll n)
    {
        if(m[n])
            return m[n];

        m[n]=fib_mem(n-1)+fib_mem(n-2);
    }
};
int main()
{
    ll n;
    fibonacci f;
    cin>>n;
    cout<<f.fib_mem(n);
    return 0;
}
