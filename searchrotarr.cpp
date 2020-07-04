/*
Q. Search a key in a sorted array which is clockwise rotated.

A =  12, 16, 18, 3, 5, 7, 8, 9

K = 16
*/

#include<bits/stdc++.h>
using namespace std;

bool bsearch(vector<int> &a,int l,int r, int k)
{
    int mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(a[mid]>k)
            l=mid+1;
        else if(a[mid]==k)
            return true;
        else
            r=mid-1;
    }
    return false;
}
int find(vector<int> &a,int n)
{
    int l=0,r=n-1;
    int mid;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(a[mid]>a[mid+1])
            l=mid+1;
        else if(a[mid]<a[mid+1])
            return mid;

    }
    return false;
}

int main()
{
    int n,temp,k;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    cin>>k;
    return 0;
}
