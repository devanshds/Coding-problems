#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t-- )
	{
	    int n,q,temp;
	    scanf("%d %d",&n,&q);
	    vector< bitset<32> > a;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&temp);
	        bitset<32> bset1(temp);
	        a.push_back(bset1);
	    }
	    for(int i=0;i<q;i++)
	    {   int P,even=0,odd=0;
	        scanf("%d",&P);
	        bitset<32> bset2(P);
	        for(int j=0;j<a.size();j++)
	        {
        	    int count = 0;
        	    bitset<32> val=a[j]^bset2;
                val.count()%2==0 ? even++ : odd++;
	        }
	        printf("%d %d\n",even,odd);
	    }
	}
	return 0;
}
