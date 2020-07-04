#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b,amax=0,bmax=0;
	    scanf("%d",&n);
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&a);
	        if(a>=amax)
	            amax=a;
	    }
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&b);
	        if(b>=bmax)
	            bmax=b;
	    }
	    if(amax>bmax || amax<bmax)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}
