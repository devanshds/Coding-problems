/*
QOTD #2. Given an array of integers, return a new array such that each element at index i of the new array is the product of all the numbers in the
original array except the one at i.

For example:

Input:    [1, 2, 3, 4, 5]

Output: [120, 60, 40, 30, 24].
Twist: Division is not allowed
*/
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
        int n,temp;
        vector<int> a,prod;
        cin>>n;
        vector<int> rev(n);
        prod.push_back(1);
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            prod.push_back(prod.back()*temp);
            a.push_back(temp);
        }
        rev[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            rev[i]=rev[i+1]*a[i+1];
        }
        for(int i=0;i<a.size();i++)
        {
            prod[i]=prod[i]*rev[i];
            cout<<prod[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
