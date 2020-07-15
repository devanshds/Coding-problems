/*
First Missing Positive Integer

Q. Given a list of integers, find 1st missing positive integer.

Input : [-2,3,-5,4,1]
Output : 2

3,4,1

INPUT: [1,5,-4,-2,-3,1,-5,2]
1,5,-1,2,4,-2,-3,-5
OUTPUT: 3


*/

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, int n)
{
    int x=1;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[a[i]]++;
    }
    while(1)
    {
        if(m[x])
        {
            x++;
        }
        else
        {
            break;
        }
    }
    cout<<x;


}


int main()
{
    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    solve(a,n);

    return 0;
}
