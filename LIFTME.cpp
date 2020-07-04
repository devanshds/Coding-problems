#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n,q;
	    cin>>n>>q;
	    int sum=0,pd=0;
	    while(q--)
	    {
	        int f,d;
	        cin>>f>>d;
	        sum+=abs(f-pd);
	        sum+=abs(f-d);
	        pd=d;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}

