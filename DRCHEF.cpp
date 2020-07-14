#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,temp,x;
        vector<int> a;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            if(x>=a[i])
            {
                ans++;
                x=max(x,2*a[i]);
            }
            else
            {
                temp=a[i];
                while(temp>0)
                {
                    ans++;
                    temp=min(temp,2*(temp-x));
                    x*=2;
                }
                x=2*a[i];
            }

        }
        printf("%d\n",ans);
    }
    return 0;
}
