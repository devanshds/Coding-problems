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
        int n,q;
        int a[27]={0};
        string s;
        cin>>n>>q;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            a[s[i]-'a']++;
        }
        while(q--)
        {
            int k,sum=0;
            cin>>k;
            for(int i=0;i<27;i++)
            {
                if(a[i]-k>0)
                    sum+=a[i]-k;
            }
            printf("%d\n",sum);
        }


    }

    return 0;
}

