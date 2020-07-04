#include <bits/stdc++.h>
using namespace std;

int sqrdsub(int n)
{
    if(n%2!=0)
        return 0;
    if(n%4==0)
        return 2;
    return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
    while(t--)
    {
        int n,temp,sum=0,count = 0;
        scanf("%d",&n);
        vector<int> a;
        map<int,int> m;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&temp);
            a.push_back(sqrdsub(temp));
        }
        m[0]++;
        for(int i=0;i<a.size();i++)
        {
            sum += a[i];
            count +=m[sum-1];
            m[sum]++;
        }
        int size=a.size();
        count =(size*(size+1)/2)-count;
        printf("%d\n",count);

    }
	return 0;
}
