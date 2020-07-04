#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x=0,y=0;
	    string s;
	    cin>>n;
	    cin>>s;
	    switch(s[0])
	        {
                case 'L' :  x--;
	                        break;
                case 'R' :
                            x++;
                            break;
                case 'U' :
                            y++;
	                        break;
	           case 'D' :   y--;
	                        break;
	        }
	    for(int i=1;i<s.length();i++)
	    {
	        switch(s[i])
	        {
                case 'L' :   if(s[i-1]!='L' && s[i-1]!='R')
                                x--;
	                        break;
                case 'R' :   if(s[i-1]!='L' && s[i-1]!='R')
                                x++;
                            break;
                case 'U' :  if(s[i-1]!='U' && s[i-1]!='D')
                                y++;
	                        break;
	           case 'D' :   if(s[i-1]!='U' && s[i-1]!='D')
                                y--;
	                        break;
	        }
	    }
	    cout<<x<<" "<<y<<"\n";
	}
	return 0;
}
