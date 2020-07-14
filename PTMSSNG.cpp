#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a=0,b=0;
	    for(int i=0;i<4*n-1;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        a=a^x;
	        b=b^y;
	    }
	    printf("%d %d\n",a,b);
	}
	return 0;
}
