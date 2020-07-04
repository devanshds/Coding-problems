#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,Q,temp;
	scanf("%d",&T);
	while(T-- )
	{
	    scanf("%d %d",&N,&Q);
	    int A[N] = {0};
	    for(int i=0;i<N;i++)
	    {
	        scanf("%d ",&A[i]);
	    }
	    while(Q--&&N>=1)
	    {   int P,even=0,odd=0;
	        scanf("%d",&P);
	        for(int j=0;j<N;j++)
	        {
        	    int count = 0,val;
        	    val=A[j]^P;
                while(val)
                {
                    count += val & 1;
                    val >>= 1;
                }
                count%2==0 ? even++ : odd++;
	        }
	        printf("%d %d\n",even,odd);
	    }
	}
	return 0;
}
