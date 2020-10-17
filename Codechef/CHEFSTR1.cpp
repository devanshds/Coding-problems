#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,curr,prev;
	    long ans=0;
	    scanf("%d",&n);
	    scanf("%d",&prev);
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&curr);
            ans+=abs(curr-prev)-1;
	        prev=curr;
	    }
	    printf("%d\n",ans);
	}
	return 0;
}

