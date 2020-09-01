/*
Asked in Google SDE interview round-1
Q. You are given n points in 2D space. Find the area of the minimum sized square that can be made from any 4 points.
eq.
1 1
2 2
3 3
1 2
2 1
3 1
1 3

A. 1
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<utility>

using namespace std;

int calcdist(int x1, int y1, int x2, int y2)
{
    return (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
}


int main()
{
    int n,x,y;
    cin>>n;
    vector<pair<int,int>> a;
    vector<vector<pair<int,int>> > dist;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a.push_back({x,y});
    }
    for(int i=0;i<n;i++)
    {   vector<pair<int,int>> distarr;
        for(int j=0;j<n;j++)
        {
            int d=calcdist(a[i].first,a[i].second,a[j].first,a[j].second);
            distarr.push_back({d,j});
        }
        sort(distarr.begin(),distarr.end());
        dist.push_back(distarr);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<dist[i][j].first<<" ";
        }
        cout<<endl;
        for(int j=0;j<n;j++)
        {
            cout<<dist[i][j].second<<" ";
        }
        cout<<endl<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int prev=a[0];
            for(int k=1;k<n;k++)
            {
                if(prev==a[i][k].first && binarySearch(2*a[i][k].first,a[i]))
                    cout<<"Area of possible square:"
                prev=a[k];
            }
        }
    }


    return 0;
}
