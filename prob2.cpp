
/*
K-th largest number

Q. In an unsorted array find the kth largest number

Input: 3, 2, 5, 1, 6
k = 2

Output: 5
*/
#include<bits/stdc++.h>
using namespace std;

int k;

int partition(vector<int> &v,int lo, int hi)
{

}
int ksort(vector<int> &v, int low,int high, int k)
{
    if(low<high)
    {
        int p=partition(v,low,high);
        ksort(v,low,p-1);
        ksort(v,p+1,high)
    }
}

int main()
{
    int n,temp;
    vector<int> v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    ksort(v,0,n-1,k);
    return 0;
}
