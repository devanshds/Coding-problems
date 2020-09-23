#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int p, int r)
{
    int x=a[r], i=p-1;
    for(int j=p;j<r;j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

int randomized_partition(vector<int> &a, int p, int r)
{
    int i =p + rand() % (r-p+1);
    swap(a[i],a[r]);
    return partition(a,p,r);
}

int randomized_select(vector<int> &a, int p, int r, int i)
{
    if(p==r)
        return a[p];
    int q=randomized_partition(a,p,r);
    int k= q - p +1;
    if(i==k)
        return a[q];
    else if (i<k)
        return randomized_select(a,p,q-1,i);
    else
        return randomized_select(a,q+1,r,i-k);

}

int main()
{
   int n,temp,k;
   cin>>n>>k;
   vector<int> a;
   for(int i=0;i<n;i++)
   {
       cin>>temp;
       a.push_back(temp);
   }
   cout<<k<<" order statistic number is "<<randomized_select(a,0,n-1,k);
   return 0;
}
