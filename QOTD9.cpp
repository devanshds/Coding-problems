
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

void solve(vector<string> &s, int n)
{
    map<string,int > m;
    map<string,int>::iterator itr;
    for(int i=0;i<n;i++)
    {
        string str=s[i];
        reverse(str.begin(),str.end());
        m[str]=i;
    }
    for(int i=0;i<n;i++)
    {
        string str=s[i];
        int count=0;
        while(!str.empty())
        {
            itr=m.find(str);
            if(itr!=m.end() && i!= itr->second && isPali(s[i].substr(s[i].size()-count,s[i].size()-1)))
                cout<<i<<" "<<itr->second<<"\n";
            str.pop_back();
            count++;
        }
        str=s[i];
        str.erase(str.begin());
        count=1;
        while(!str.empty())
        {
            itr=m.find(str);
            if(itr!=m.end() && i!= itr->second && isPali(s[i].substr(0,count+1)))
                cout<<itr->second<<" "<<i<<"BRUH\n";
            str.erase(str.begin());
            count++;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<string> s;
    string str;
    while(n--)
    {
        cin>>str;
        s.push_back(str);
    }
    solve(s, s.size());
    return 0;

}
