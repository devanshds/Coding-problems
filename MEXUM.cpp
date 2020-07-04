
#include <bits/stdc++.h>
using namespace std;

const unsigned int mod=998244353;
int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,temp;
	    vector<int> a;
	    cin>>n;
	    while(n--)
	    {
	        cin>>temp;
	        a.push_back(temp);
	    }
	    long long int sum=1,max;
	    for(int i=0;i<a.size();i++)
	    {
	        max=1;
	        for(int j=i;j<a.size();j++)
	        {
	            if(a[j]==max)
	                max++;
                else if(a[j]> max)
                {
                    max=a[j];
                    max++;
                }
                sum+=max%mod;
                if(a[j]==max)
	                max++;
	        }

	    }
	    printf("%lld\n",sum);


	}

	return 0;
}
