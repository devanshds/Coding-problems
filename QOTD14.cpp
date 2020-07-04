/*

QOTD #14

Given an array of integers of length n and a number k, where 1 <= k <= n.
Compute the maximum values of each subarray of length k.

Input:
[10, 5, 2, 7, 8, 7}
k = 3

Output:
[10, 7, 8, 8]

Explanation:

max(10,5,2) = 10
max(5, 2, 7) = 7
max(2, 7, 8) = 8
max(7, 8, 7) = 8


Do this in O(n) time and O(k) space
You don't need to store the results, simply print them as you compute them
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,temp,mx=-1;
    cin>>n>>k;
    vector<int> a;
    map<int,int> m;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(i=0;i<k;i++)
    {
        m[a[i]]=i;
    }
 //   for(auto itr=m.begin();itr!=m.end();itr++)
    mx=m.rbegin()->first;
    for(int j=0;i<=n;i++,j++)
    {
        cout<<mx<<" ";
        m.erase(a[j]);
        m[a[i]]=i;
        mx=m.rbegin()->first;
    }
    return 0;
}
