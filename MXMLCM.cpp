#include<bits/stdc++.h>
using namespace std;
vector<int> primelist;
class gfg
{
    public :
        int gcd(int a, int b)
        {
            if (a == 0)
                return b;
            return gcd(b % a, a);
        }

        int lcm(int a, int b)
        {
            return (a*b)/gcd(a, b);
        }
        void prime(int m)
        {
            for(int i=1;i<=m;i++)
            {
                int flag = 0;

                for(int j = 2; j <= i/2; ++j)
                {
                    if(i % j == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)
                    primelist.push_back(i);
            }
        }
} ;
int main()
{
    gfg g;
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m,lc=1,temp,ans,flag=0;
	    scanf("%d %d",&n,&m);
	    while(n--)
	    {
	        scanf("%d",&temp);
	        lc=g.lcm(lc,temp);
	    }
	    g.prime(m);
	    for (vector<int>::reverse_iterator it = primelist.rbegin(); it != primelist.rend(); ++it)
        {
            if(lc%*it!=0)
            {
                printf("%d\n",*it);
                flag=1;
                break;
            }
        }
	    if(flag==0)
            printf("%d",1);
        primelist.clear();
	}

	return 0;
}
