#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,temp,distance;
        long long int sum=0;
        cin>>n>>k;
        vector<int> a,dist;
        vector< vector<int> > b;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
            b.push_back({i+1,0});
        }
        for(int i=0;i<n;i++)
        {
            distance = a[i] - 1 - i;
            dist.push_back(distance);
        }

        vector<vector<int> > res; //traverse in reverse
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i][0])
                b[i][1]=1;
        }
        for(auto itr=b.rbegin();itr!=b.rend();itr++)
        {

        }
    }
    return 0;
}

