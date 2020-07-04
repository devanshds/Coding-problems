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
        int n,temp;
        cin>>n;
        vector<int> a;
        int count[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++)
        {
            count[i]++;
            for(int j=i;j>0;j--)
            {
                if(abs(a[j]-a[j-1])<=2)
                    count[i]++;
                else
                    break;
            }
            for(int j=i;j<n-1;j++)
            {
                if(abs(a[j]-a[j+1])<=2)
                    count[i]++;
                else
                    break;
            }
        }
        int max=0,min=11;
        for(int i=0;i<n;i++)
        {
            if(count[i]>=max) max=count[i];
            if(count[i]<min) min=count[i];
        }
        printf("%d %d\n",min,max);
    }

    return 0;
}
