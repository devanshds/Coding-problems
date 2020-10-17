#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,temp,sum=0,count=0;
    cin>> n >> k;

    bool flag= false;

    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp>k)
            flag = true;
        sum+=temp;
        if(sum>k)
        {
            count++;
            sum=temp;
        }
    }
    if(flag)
        count=-1;
    else if(sum)
        count++;
    cout<<count<<"\n";

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	    solve();

	return 0;
}

