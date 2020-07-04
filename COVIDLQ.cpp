#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,count=0,init=0,temp,flag=0;
	    scanf("%d",&n);
	    while(n--)
	    {
            scanf("%d",&temp);
            if(temp==1)
            {
                if(count<6 && flag==0 && init==1)
                {
                    flag=1;
                    printf("NO\n");
                }
                init=1;
                count=0;

            }
                count++;
	    }
	    if(flag==0)
	        printf("YES\n");
	}

	return 0;
}
