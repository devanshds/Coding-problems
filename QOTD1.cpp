/*
#Day 1. Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the
original array except the one at i.

For example:

Input:    [1, 2, 3, 4, 5]

Output: [120. 60, 40, 30, 24].

Send me the code separately
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,temp,count0=0;
    long long int prod=1;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==0)
        {
            count0++;
        }
        if(temp!=0)
            prod*=temp;
        a.push_back(temp);
    }
    if(count0>1)
        prod=0;
    for(int i=0;i<n;i++)
    {
        if(count0==1)
        {
            if(!a[i]==0)
                cout<<"0 ";
            else
                cout<<prod<<" ";
        }
        else
        {
            if(a[i]!=0)
                cout<<prod/a[i]<<" ";
            else
                cout<<prod<<" ";
        }

    }
    return 0;
}
