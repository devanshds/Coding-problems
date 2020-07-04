#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int T, N, M,min,flag;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&N,&M);
        int F[N],P[N], val[M]= {0};
        for(int i=0;i<N;i++)
        {
            scanf("%d",&F[i]);
        }
        for(int j=0;j<N;j++)
        {
            scanf("%d",&P[j]);
            val[F[j]-1]+=P[j];
        }
        min=val[0];
        flag=0;
        for(int k=0;k<M;k++)
        {   for(int x=0;x<N;x++)
            {
                if(F[x]==k)
                    flag=1;
            }
            if(val[k]<min && flag==1)
                min=val[k];
        }
        printf("%d\n", min);
    }

    return 0;
}
