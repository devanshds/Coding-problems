#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==1)
        {
            printf("1\n1 1\n");
        }

        else if(n%2==0)
        {
            printf("%d\n",n/2);
            for(int i=1;i<=n/2;i++)
            {
                printf("2 %d %d\n",i*2-1,i*2);
            }
        }
        else
        {
            printf("%d\n",n/2);
            for(int i=1;i<=n/2;i++)
            {
                if(i==1)
                    printf("3 %d %d %d\n",i*2-1,i*2,n);
                else
                    printf("2 %d %d\n",i*2-1,i*2);
            }
        }
    }
    return 0;
}
