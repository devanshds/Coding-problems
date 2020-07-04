#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,q,pt,x1,x2,y,x,count;
	    vector<int> a;
	    scanf("%d %d",&n,&q);
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&pt);
	        a.push_back(pt);
	    }
	    while(q--)
	    {
	        count=0;
	        scanf("%d %d %d",&x1,&x2,&y);
	        for(int j=1;j<n;j++)
	        {   x=(y-a[j])/(a[j]-a[j-1])+j+1;
	            if(min(a[j],a[j-1])<=y && y<=max(a[j],a[j-1]) && j<=x && x<=j+1 && x1<=x && x<=x2 && x2!=j && x1!=j+1)
                {
                    count++;
                }
	        }
	        printf("\n%d\n",count);
	    }


	}
	return 0;
}

