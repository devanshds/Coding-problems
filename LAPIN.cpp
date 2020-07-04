#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int a[26]={0},b[26]={0};
        string s;
        cin>>s;
        int n,j;
        n=s.length();
        for(int i=0;i<n/2;i++)
        {
            a[s[i]-'a']++;
        }
        j=n/2;
        if(n%2!=0)
            j++;
        for(; j<n;j++)
        {
            b[s[j]-'a']++;
        }
        int fg=0;
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                printf("NO\n");
                fg=1;
                break;
            }
        }
        if(fg==0)
            printf("YES\n");


    }

    return 0;
}
