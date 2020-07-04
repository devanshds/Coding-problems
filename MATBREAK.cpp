#include <bits/stdc++.h>
using namespace std;

const unsigned int m = 1000000007;
long long int power(long long int x, long long int y)
{
    int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2);
    if (y%2 == 0)
        return (temp*temp)%m;
    else
        return (x*temp*temp)%m;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,a;
	    long long int sum=0;
	    cin>>n>>a;
	    for(int i=1;i<=n;i++)
	    {
	        long long int p=1;
	        p=power(a,2*i-1);
	        sum=((sum+p)%m+m)%m;
	        a*=p;
	    }
	    cout<<sum<<"\n";
	}


	return 0;
}

