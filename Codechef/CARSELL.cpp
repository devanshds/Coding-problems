#include <bits/stdc++.h>
using namespace std;

const unsigned int M = 1000000007;

int main() {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,temp;
	    long long int sum=0;
	    vector<int> p;
	    scanf("%d",&n);
	    while(n--)
	    {
	        scanf("%d",&temp);
	        p.push_back(temp);
	    }

	    sort(p.begin(), p.end(), greater<int>());

	    for(int i=0;i<p.size(); i++)
	    {
	        if(p[i]-i<=0)
	            break;
	        sum+=p[i]-i;
	    }
	    sum=sum%M;
	    printf("%d\n",sum);
	}
	return 0;
}
