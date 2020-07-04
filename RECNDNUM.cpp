#include<bits/stdc++.h>
using namespace std;

const unsigned int mod=1000000007;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,a,b,block,sum=0;
        scanf("%lld %lld",&n,&k);
        if(n==0)
        {
            block=k-1;
            if(block>0)
                sum=(block*block)%mod;
            sum+=block;
        }
        else
        {

            a=k/2;
            b=k%2;
            block=n+a;
            if(b==0)    block--;
            sum=(block*block)%mod;
            if(b==1)
            {
                sum+=block-n;
            }
            else
            {
                sum+=block+n;
            }

        }
        printf("%lld\n",sum%mod);
    }
    return 0;
}
