#include <iostream>
using namespace std;

int main() {
    long long int t,n,k;
	long long int a[100001];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int j=0,flag=0;
		while(j+k!=n)
		{

			if(a[j]>a[j+k])
			{
				swap(a[j],a[j+k]);
				if(j>0){j--;}
			}
			else
			{
				j++;
			}
		}
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]  < a[i]){flag=1; break;}
		}
		if(flag==1){cout<<"no\n";}
		else{cout<<"yes\n";}
	}
	return 0;
}
