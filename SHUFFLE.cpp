#include<bits/stdc++.h>
using namespace std;
void solve()
{
        int n,k,temp,flag=0;
        scanf("%d %d",&n,&k);
        vector<int> a,v;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            a.push_back(temp);
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        {
            flag=0;
            auto iter = v.begin();
            while ((iter = find(iter, v.end(), temp)) != v.end())
            {
                int index= distance(v.begin(),iter);
                if(abs(index-i)%k==0)
                {
                    flag=1;
                    *iter=-1;
                }

                iter++;
            }
            if(flag==0)
            {
                printf("no\n");
                return;
            }
        }
        printf("yes\n");
}
int main()
{

    int t;
    scanf("%d",&t);
    while(t--) solve();
    return 0;
}
