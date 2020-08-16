
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,temp,ans=-1,a=INT_MAX;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(k%temp==0 && a >= k/temp)
        {
            a=k/temp;
            ans=temp;
        }
    }
    printf("%d\n",ans);

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	    solve();

	return 0;
}

