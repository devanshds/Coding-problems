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
        int n,temp,max=0;
        map<int,int> m;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            m[temp]++;
        }
        for (map<int,int>::iterator i = m.begin(); i != m.end(); i++)
            if((i->second)>max)
                max=i->second;
        if(m.size()== max)
            cout<<max-1<<"\n";
        else if(m.size()>max)
            cout<<max<<"\n";
        else
            cout<<m.size()<<"\n";
    }
    return 0;
}

