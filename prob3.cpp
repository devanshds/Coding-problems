/*
Triplets adding to zero

Q. For an array of integers, print all triplets that add to zero.

I/P: 1, 4, 3, -1, -1, -3, 2
     -3, -1, -1, 1, 2, 3, 4
O/P: (4, - 1, - 3), (-1,-1,2), (1,2,-3)
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    vector<int> a;
    vector<vector<int>> res;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
        int l=i+1,r=n-1;
        while(l<r)
        {
            if(a[i]+a[l]+a[r]==0)
            {
                res.push_back({a[i],a[l],a[r]});
                l++;
                r--;
            }
            else if(a[i]+a[l]+a[r]<0)
                l++;
            else
                r--;
        }
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<"\n";
    }

    return 0;
}
