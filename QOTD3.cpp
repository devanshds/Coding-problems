/*
	Q. Given an array of integers that are out of order, determine the bounds of the smallest window
       that must be sorted in order for the entire array to be sorted.

	Input:  [3, 7, 5, 6, 9]

	Output: 1, 3

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    int left=-1,right=-1;
    for(int i=0; i<a.size()-1;i++)
    {
        if(a[i]>a[i+1])
            left=i;
    }
    for(int i=a.size()-1; i>0;i--)
    {
        if(a[i]<a[i-1])
            right=i;
    }
    int min=INT_MAX,max=INT_MIN;

    for(int i=left;i<right;i++)
    {
        if(a[i]<min)
            min=a[i];
        if(a[i]>max)
            max=a[i];
    }
    for(int i=0;i<left;i++)
    {
        if(a[i]>min)
        {
            left = i;
            break;
        }
    }
    for(int i=a.size()-1;i>right;i--)
    {
        if(a[i]<max)
        {
            right = i;
            break;
        }
    }
    cout<<left<<", "<<right;

    return 0;
}
