#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &v)
{
    for(int i=1;i<v.size();i++)
    {
        if(v[i-1]>v[i])
            return false;
    }
    return true;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,temp;
	    vector<int> a;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        a.push_back(temp);
	    }
	    int x=-1,y=-1,z=-1,count=0;
	    vector<vector<int> > ans;
	    while(k--)
	    {
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]!=i+1)
	            {
	                if(x==-1)
	                    x=i;
	                else if(y==-1)
	                    y=i;
	                else if(z==-1)
	                    z=i;
	                if(x!=-1 && y!=-1 && z!=-1)
	                {
	                    ans.push_back({a[x],a[y],a[z]});
	                    temp=a[z];
	                    a[z]=a[y];
	                    a[y]=a[x];
	                    a[x]=temp;
	                    x=-1;
	                    y=-1;
	                    z=-1;
	                }
	            }
	        }
	    }
	    if(isSorted(a))
        {
            printf("%d\n",ans.size());
            for(int i=0;i<ans.size();i++)
            {
                printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
            }
        }
        else
            printf("-1\n");

	}
	return 0;
}
