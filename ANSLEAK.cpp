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
        int n,m,k,c;
        cin>>n>>m>>k;
        for(int i=0;i<n;i++)
        {
            int count[10]={0};
            for(int j=0;j<k;j++)
            {
                cin>>c;
                count[c]++;
            }
            cout<<distance(count, max_element(count, count + 10))<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
