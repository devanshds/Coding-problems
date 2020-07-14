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
        int n,temp,sum=0,m=INT_MAX;
        cin>>n;
        vector<int> a,b;
        int x=0;
        long long int ans=0;
        unordered_map<int,int> ma,mb;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
            ma[temp]++;
            mb[temp]++;
            x=x^temp;
            m=min(m,temp);
        }
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            b.push_back(temp);
            ma[temp]++;
            mb[temp]++;
            x=x^temp;
            m=min(m,temp);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(x>0)
            printf("-1\n");
        else if(equal(a.begin(),a.end(),b.begin()))
        {
            printf("0\n");
        }
        else
        {
            vector<int> r,s;
            for(int i=0;i<n;i++)
            {
                if(ma[a[i]])
                    ma[a[i]]-=2;
                else
                    r.push_back(a[i]);
            }
            for(int i=0;i<n;i++)
            {
                if(mb[b[i]])
                    mb[b[i]]-=2;
                else
                    s.push_back(b[i]);
            }
            if(r.size()==0)
                printf("0\n");
            if(r.size()!=s.size())
                printf("-1\n");
            else
            {
                int k=r.size();
                for(int i=0;i<k;i++)
                {
                    ans+=min(2*m,min(r[i],s[k-i-1]));
                }
                printf("%lld\n",ans);
            }
        }

    }

    return 0;
}
