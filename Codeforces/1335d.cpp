#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s[9];
        for(int i=0;i<9;i++)
            cin>>s[i];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(i==j)
                    swap(s[i][j],s[i+1][j+1]);
            }
        }
        for(int i=0;i<9;i++)
            cout<<s[i]<<"\n";

    }
    return 0;
}
