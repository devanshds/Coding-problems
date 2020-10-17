
#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int k;
	    cin>>k;
	    cout<<"O";
	    for(int i=1;i<64;i++)
	    {
	        if(i%8==0)
	            cout<<"\n";
	        if(i<k)
	            cout<<".";
	        else
	            cout<<"X";
	    }
	    cout<<"\n\n";
	}
	return 0;
}
