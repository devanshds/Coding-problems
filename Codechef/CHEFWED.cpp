
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,temp,cost;
    vector<int> f;
    unordered_map<int,int> m;
    cin>>n>>k;
    cost=k;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        f.push_back(temp);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(m[f[i]])
        {
            if(m[f[i]]<=1)
                flag=0;
            else
                flag=1;
            if(cost + 2 - flag < cost+k)
            {
                cost+= 2 - flag;
                m[f[i]]++;
            }
            else
            {
                m.clear();
                m[f[i]]++;
                cost+=k;
            }
        }
        else
        {
            m[f[i]]++;
        }

    }

    cout<<cost<<"\n";
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

