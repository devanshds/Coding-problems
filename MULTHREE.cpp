#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        long long int k,d0,d1,val=d0+d1,sum=0;
        cin>>k>>d0>>d1;
        sum=(d0+d1)%10;
        sum+=(d0 + d1)%10;
        for(long long int i=3;i<k;i++)
        {
            val=(2*val)%10;
            sum+=val;
        }
        if(sum%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
