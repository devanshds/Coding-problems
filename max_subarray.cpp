#include<bits/stdc++.h>
using namespace std;

struct subarray
{
    int low,high,sum;
};

subarray find_crossing_max_subarray(vector<int> &arr, int low, int mid, int high)
{
    int lsum=INT_MIN,rsum=INT_MIN,li=low,ri=high,sum=0;
    for(int i=mid; i>=low; i--)
    {
        sum+=arr[i];
        if(sum>lsum)
        {
            lsum=sum;
            li=i;
        }

    }
    sum=0;
    for(int i=mid+1; i<=high; i++)
    {
        sum+=arr[i];
        if(sum>rsum)
        {
            rsum=sum;
            ri=i;
        }
    }
    return {li,ri,lsum+rsum};
}

subarray find_max_subarray(vector<int> &arr, int low, int high)
{
    if(low==high)
        return {low,high,arr[low]};         //base case of single input
    else
    {
        int mid=low-(low-high)/2;
        subarray left,right,cross;
        left=find_max_subarray(arr,low,mid);
        right=find_max_subarray(arr,mid+1,high);
        cross=find_crossing_max_subarray(arr,low,mid,high);
        if(left.sum>=right.sum && left.sum>=cross.sum)
            return left;
        else if(right.sum>=left.sum && right.sum>=cross.sum)
            return right;
        else
            return cross;
    }


}

int main()
{
    int n,temp;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    subarray subarr;

    subarr = find_max_subarray(arr, 0, n-1);
    cout<<subarr.low<<" "<<subarr.high<<" "<<subarr.sum;


    return 0;
}
