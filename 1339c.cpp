#include<bits/stdc++.h>
using namespace std;

int pwr(int n)
{
    unsigned int p = 1;
    if (n && !(n & (n - 1)))
        return log2(n)+1;

    while (p < n)
        p <<= 1;
    return log2(p)+1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,curr,prev,x,mx=0;
        scanf("%d",&n);
        scanf("%d",&prev);
        n--;
        while(n--)
        {
            scanf("%d",&curr);
            if(curr-prev<0)
            {
                int x=pwr(prev-curr);
                curr+=pow(2,x-1);
                if(x>mx)
                    mx=x;
            }
            prev=curr;
        }
        printf("%d\n",mx);
    }
    return 0;
}
