#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,temp;
        vector<int> v,a;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        if(n%2)
        {
            a.push_back(v[n/2]);

        }
        for(int j=n/2-1;j>=0;j--)
        {
                a.push_back(v[j]);
                a.push_back(v[n-j-1]);
        }
        for(int i=0;i<a.size();i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
