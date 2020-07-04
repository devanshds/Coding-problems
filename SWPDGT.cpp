#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,ax[2],bx[2],mx;
	    scanf("%d %d",&a,&b);
	    ax[0]=a/10;
	    ax[1]=a%10;
	    bx[0]=b/10;
	    bx[1]=b%10;
	    mx=a+b;
	    if(a<10 && b>9 || b<10 && a>9)
        {
            if(a<b)
            {
                for(int i=0;i<2;i++)
                {
                    swap(ax[1],bx[i]);
                    if(ax[1]+(bx[0]*10+bx[1])>=mx)
                        mx=ax[1]+(bx[0]*10+bx[1]);
                    swap(ax[1],bx[i]);
                }
            }
            else
            {
                for(int i=0;i<2;i++)
                {
                    swap(bx[1],ax[i]);
                    if(bx[1]+(ax[0]*10+ax[1])>=mx)
                        mx=bx[1]+(ax[0]*10+ax[1]);
                    swap(bx[1],ax[i]);
                }
            }
        }
        else if(a<10 && b<10)
            mx=a+b;
        else
        {
            for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                {
                    swap(ax[i],bx[j]);
                    if((ax[0]*10+ax[1])+(bx[0]*10+bx[1])>=mx)
                        mx=(ax[0]*10+ax[1])+(bx[0]*10+bx[1]);
                    swap(ax[i],bx[j]);
                }
            }
        }
	    printf("%d\n",mx);
	}
	return 0;
}
