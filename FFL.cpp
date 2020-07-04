#include <bits/stdc++.h>
using namespace std;

int main() {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,s,temp,min0=101,min1=101;
	    scanf("%d %d",&n,&s);
	    vector<int> price,type;
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        price.push_back(temp);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>temp;
	        type.push_back(temp);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(type[i]==0 && price[i]<min0)
	            min0=price[i];
	        if(type[i]==1 && price[i]<min1)
	            min1=price[i];
	    }
	    if(min0+min1+s<=100)
	        printf("yes\n");
	    else
	        printf("no\n");
	}
	return 0;
}

