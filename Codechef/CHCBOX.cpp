#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n,temp,max=0,index,ans;
	    cin>>n;
	    vector<int> w;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        if(temp>=max)
	        {
	            max=temp;
	            index=i;
	        }

	        w.push_back(temp);
	    }
	    if(index<n/2)
	    {
	        ans=n/2;
	    }
	    else
	    {
	        ans=0;
	    }
	    cout<<ans<<"\n";


	}
	return 0;
}

