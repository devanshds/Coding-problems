
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int pa,pb,a,b;
    cin>>pa>>pb;
    a=pa/9;
    if(pa%9!=0)
        a++;
    b=pb/9;
    if(pb%9!=0)
        b++;
    if(a<b)
        printf("0 %d\n",a);
    else
        printf("1 %d\n",b);
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

