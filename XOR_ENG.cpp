#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
	// your code goes here
	int T,N,Q,temp;
	scanf("%d",&T);
	while(T--)
	{
	    vector<int> A;
	    int val;
	    scanf("%d %d",&N,&Q);
	    while(N--)
	    {
	        scanf("%d",&temp);
	        A.push_back(temp);
	    }
	    while(Q--)
	    {   int P,even=0,odd=0;
	        scanf("%d",&P);
	        for(int i=0;i<A.size();i++)
	        {
        	    int count1 = 0;
        	    val=A[i]^P;
                while(val)
                {
                    if(val%2==1)
                    {
                        count1++;
                    }
                    val/=2;
                }
                count1%2==0 ? even++ : odd++;
	        }
	        printf("%d %d\n",even,odd);
	    }
	}
	return 0;
}
