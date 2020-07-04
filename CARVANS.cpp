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
        int n,temp,prev,count=1;
        cin>>n;
        cin>>prev;
        for(int i=1;i<n;i++)
        {
            cin>>temp;

            if(temp<prev)
            {
                prev=temp;
                count++;
            }

        }
        printf("%d\n",count);

    }

    return 0;
}
