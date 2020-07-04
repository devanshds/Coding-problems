/*
	Q. Given a list of words, find all pairs of unique indices such that the concatenation of the
	two words is a palindrome.

	Input: ["code", "edoc", "da", "d"]

	Output: [(0,1) , (1,0), (2,3)]

*/
#include<bits/stdc++.h>
using namespace std;

bool isPali(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=s[s.size()-i-1])
            return false;
    }
    return true;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<string> s;
    vector<pair<int,int> > res;
    string str;
    while(n--)
    {
        cin>>str;
        s.push_back(str);
    }
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(i!=j)
            {
                string temp=s[i]+s[j];
                if(isPali(temp))
                    res.push_back({i,j});
            }
        }
    }
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i].first<<" "<<res[i].second<<"\n";
    }
    return 0;

}
