#include <bits/stdc++.h>
using namespace std;

int divcount(int n)
{
    // Print the number of 2s that divide n
    int count=0;
    while (n % 2 == 0)
    {
        count++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            count++;
            n = n/i;
        }
    }

    if (n > 2)
        count++;
    return count;
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,k;
	    scanf("%d %d",&x,&k);
	    if(x==1 && k==1)
        {
            printf("1\n");
            continue;
        }

	    int res=divcount(x);
	    if(res>=k)
	        printf("1\n");
	    else
	        printf("0\n");
	}
	return 0;
}
