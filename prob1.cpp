/*
Find non duplicate

There is an array where each number is present in pair except one which has no pair, find that number.

Input: 1, 3, 4, 1, 2, 3, 2
Output : 4

Input: 1, 3, 2, 3, 3, 2, 1,2, 2
Output: 3
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    vector<int> v;
    cin>>n;
    long long int x=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        x=x^v[i];
    }
    cout<<x;
    return 0;
}
