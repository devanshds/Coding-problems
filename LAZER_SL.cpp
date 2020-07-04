
#include <bits/stdc++.h>
using namespace std;

bool sortcol1( const vector<int>& v1, const vector<int>& v2 )
{
    return v1[1] < v2[1];
}
bool sortcol0( const vector<int>& v1, const vector<int>& v2 )
{
    return v1[0] < v2[0];
}
int binarysearch(vector<vector<int>> &a, int &x)
{   int l=0,r=a.size(),m;
    while (l <= r) {
        m = l + (r - l) / 2;
        if (a[m][1] == x)
            return m;
        if (a[m][1] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return m;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
        int n,q,temp;
        vector<vector<int>> a;
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            a.push_back({i+1,temp});
        }
        sort(a.begin(), a.end(),sortcol1);
        while(q--)
        {
            int x1,x2,y,count=0;
            scanf("%d %d %d",&x1,&x2,&y);
            int pos=binarysearch(a,y);
            for(int j=0;j<pos;j++)
            {
                if(a[j+1][1]<=y && x2!=a[j][0] && x1!=a[j+1][0])
                   count++;
            }
            printf("%d\n",count);


        }

	}
	return 0;
}

