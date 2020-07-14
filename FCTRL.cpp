
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,ans=0;
	    cin>>n;
	    int k=1;
	    while(pow(5,k+1)<=n)
	        k++;
	    for(int i=1;i<=k;i++)
	    {
	        ans+=n/pow(5,i);
	    }
	    printf("%lld\n",ans);
	}
	return 0;
}
