#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin>>t;
    while(t--)
    {
        long long x,y,l,r;
        cin>>x>>y>>l>>r;
        vector<vector<long long int > > v;
        long long int mx=x|y;
        for(long long int i=0;i<=mx;i++)
        {
            long long int ans=0;
            ans=(x&i)*(y&i);
            v.push_back({ans,i});
        }
        mx++;
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i][0]<<" "<<v[i][1]<<"\n";
        }
        long long int ans=0;
        long long int left,right;
        left=l%mx;
        right=r%mx;
        if(left>right)
            right=mx+right;
        cout<<"left: "<<left<<" right:"<<right<<"\n";
        long long int temp;
        if(abs(r-l)<mx)
        {
            temp=-1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i][1]<=right-left)
                {
                    ans=l+v[i][1];
                    temp=v[i][0];
                    while(v[i][0]==temp || i<v.size())
                    {
                        ans=l+v[i][1];
                        i++;
                    }
                    break;
                }
            }
        }
        else
        {
            ans=mx-1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
