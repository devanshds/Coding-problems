/*
Smallest window that contains all characters of string itself
Given a string, find the smallest window length with all distinct characters of the given string.
For eg. str = “aabcbcdbca”, then the result would be 4 as of the smallest window will be “dbca” .
*/
#include<bits/stdc++.h>
using namespace std;
void solve(string &str)
{
    unordered_map<char,int> m;
    for(int i=0;i<str.length();i++)
    {
        if(!m[str[i]])
        {
            m[str[i]]=0;
        }
    }
    int left=0,count=0,ans=INT_MAX;
    for(int i=0;i<str.length();i++)
    {
        m[str[i]]++;
        if(m[str[i]]==1)
            count++;
        if(count==m.size())
        {
            while(m[str[left]]>1)
            {
                m[str[left]]--;
                left++;
            }
            ans=min(ans,i-left+1);
        }
    }
    cout<<ans;
}
int main()
{
    string str;
    cin>>str;
    solve(str);
    return 0;
}
