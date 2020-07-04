/*
	Q. Given an array of  integers, find the maximum sum of any contiguous subarray of the array.
	Elements can also wrap around. (1st element is next to last element)

	Input : [7, -5, -1,4, -8, -9, 7]

	Output = 0        //Subarray with 0 elements

	Input : [ 8, -1, 3, 4]
	Output: 15

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,temp;
    cin>>n;
    int sum=0,mx=0,tot=0;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        tot+=temp;
        sum+=temp;
        if(sum>0)
            sum=0;
        if(sum<mx)
            mx=sum;
    }
    cout<<tot-mx;
    return 0;
}
