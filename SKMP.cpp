#include <bits/stdc++.h>
using namespace std;

void solve()
{
    map<char,int> m;
    string s,p;
    cin>>s;
    cin>>p;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    for(int i=0;i<p.length();i++)
    {
        m[p[i]]--;
    }

    for(char it='a'; it!='z'+1; it++)
    {
        if(it==p[0])
        {
            int j=0;
            while(p[j]==p[0] && j<p.length())
            {
                j++;
            }
            if(p[j]<p[0] && m[it])
            {
                cout<<p;
                while(m[it]>0)
                {
                    cout<<it;
                    m[it]--;
                }

            }
            else
            {
                while(m[it]>0)
                {
                    cout<<it;
                    m[it]--;
                }
                cout<<p;
            }
        }
        else
        {
            while(m[it]>0)
            {
                cout<<it;
                m[it]--;
            }
        }

    }
    cout<<"\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	    solve();

	return 0;
}

