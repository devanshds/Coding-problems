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
        cin>>n>>k;
        vector<int> a,dist;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        for(int i=0;i<n;i++)
        {
            distance = a[i] - 1 - i;
            dist.push_back(distance);
            cout<<distance<<" ";
        }


    }

    return 0;
}

