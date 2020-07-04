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
        string str;
        int flag=0;
        cin>>str;
        long long int n=str.length();

        if(n<3)
        {
            printf("YES\n");
        }
        else
        {
            for(int i=2;i<n;i++)
            {
                if(str[i]!=str[i-2])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                printf("NO\n");
            else
                printf("YES\n");
        }

    }
    return 0;
}

