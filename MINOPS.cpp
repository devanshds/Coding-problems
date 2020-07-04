#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    string s,r;
	    long long int k=0,l=0;
	    int flag=0;
	    cin>>s>>r;

	    for(int i=0;i<s.length();i++)
	    {
	        if(s[i]!=r[i])
	        {
	            l++;
	            flag=1;
	        }
	        else
	        {
	            if(flag==1) k++;
	            flag=0;
	        }

	    }
	    if(flag==1) k++;
	    cout<<k<<" "<<l;
	}
	return 0;
}

