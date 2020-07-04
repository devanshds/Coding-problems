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
        int n,temp,mx=0,new_max=0;
        vector<int> a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        long long int count=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                if(count>mx)
                    mx=count;
                count=0;
            }
            count++;
        }
        if(count>mx)
            mx=count;
        for(int i=0;i<n;i++)
        {
            a.push_back(a[i]);
        }
        count=1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]<a[i-1])
            {
                if(count>new_max)
                    new_max=count;
                count=0;
            }
            count++;
        }
        if(count>new_max)
            new_max=count;
        int x=1;
        if(new_max>mx) x++;
        printf("%d\n",x);
    }

    return 0;
}
