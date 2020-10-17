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

        int64_t x,y,l,r;
        cin>>x>>y>>l>>r;
        for (int i = 64; i >= 0; i--)
        {
            if (x&(1<<i)) cout << "1";
            else cout << "0";
        }



    }
    return 0;
}
