
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n,counta=0,countb=0,a,b;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x=0,y=0;
            cin>>a>>b;
            while(a>0)
            {
                x+=a%10;
                a/=10;
            }
            while(b>0)
            {
                y+=b%10;
                b/=10;
            }
            if(x>y)
                counta++;
            else if(x<y)
                countb++;
            else
            {
                counta++;
                countb++;
            }
        }
        if(counta>countb)
            printf("0 %d\n",counta);
        else if(counta<countb)
            printf("1 %d\n",countb);
        else
            printf("2 %d\n",counta);

    }
	return 0;
}
