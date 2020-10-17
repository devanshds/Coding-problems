#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int h,p;
    bool ans=false;
    cin>>h>>p;
    while(p!=0)
    {
        h-=p;
        p/=2;
        if(h<=0)
            ans=true;
    }
    if(ans)
        printf("1\n");
    else
        printf("0\n");
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

