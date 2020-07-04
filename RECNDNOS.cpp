#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,temp,prev;
        int A[1001]={0},max=0,maxi=0,flag=0;
        scanf("%d",&n);
        scanf("%d",&prev);
        A[prev]++;
        for(int i=1;i<n;i++)
        {
            scanf("%d",&temp);
            if(temp!=prev || flag==1)
            {
                A[temp]++;
                if(flag==1)
                    flag=0;
            }
            else if(temp==prev)
            {
                flag=1;
            }
            prev=temp;

        }
        for(int i=0;i<1001;i++)
        {
            if(A[i]>max)
            {
                max=A[i];
                maxi=i;
            }
        }
        printf("%d\n",maxi);
    }


    return 0;
}
