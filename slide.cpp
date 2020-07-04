#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums) {
        int cum=0;
        map<int,int> rec;
        int cnt = 0;
        rec[0]++;
        for(int i=0;i<nums.size();i++)
        {
            cum += nums[i];
            cnt += rec[cum-1];
            rec[cum]++;
        }
        return cnt;
    }
int main()
{
    vector<int> a;
    a.push_back(0); a.push_back(1); a.push_back(0); a.push_back(2); a.push_back(1);
    int n=a.size();
    cout<<(n*(n+1)/2) -subarraySum(a);
}
