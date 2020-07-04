/*
	4.
		Given an array of  integers, find the maximum sum of any contiguous subarray of the array.
		Input: [34, -50, 42, 14, -5, 86]

		Output: 137

		Input : [-5, -1, -8, -9]

		Output = 0        //Subarray with 0 elements

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp;
    cin>>n;
    int sum=0,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
        if(sum<0)
            sum=0;
        if(sum>mx)
            mx=sum;
    }
    cout<<mx;
    return 0;
}
