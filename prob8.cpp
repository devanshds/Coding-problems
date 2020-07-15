/*
LONGEST CONSECUTIVE SEQUENCE

Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

Your algorithm should run in O(n) complexity.
*/
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums)
{
        int count=0,ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=1;
        }

        for(int i=0;i<nums.size();i++)
        {
            int j=nums[i];
            while(m[j])
            {
                count+=m[j];
                m[j]=0;
                j++;
            }
            m[nums[i]]=count;
            ans=max(count,ans);
            count=0;
        }
        cout<<ans;


}


int main()
{
    int n,temp;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }

    solve(a);

    return 0;
}
