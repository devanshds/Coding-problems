/*
Print all possible permutations of a vector
eg:
Input :
1 2 3
Output:
1 2 3
2 3 1
3 1 2
2 1 3
1 3 2
3 2 1
*/
//Backtracking approach
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int k, vector<vector<int>> &res)
{
    if(k>=nums.size())
    {
        res.push_back(nums);
        return;
    }
    for(int i=k;i<nums.size();i++)
    {
        swap(nums[k],nums[i]);
        solve(nums,k+1,res);
        swap(nums[k],nums[i]);
    }
}

int main()
{
    int n,temp;
    cin>>n;
    vector<int> nums;
    vector<vector<int>> res;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        nums.push_back(temp);
    }
    solve(nums, 0, res);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0; j<res[i].size();j++)
            cout<<res[i][j];
        cout<<"\n";
    }
}
