#include<bits/stdc++.h>
using namespace std;

vector< vector<int> > ans;
int n,K;
void rotate(vector<int> &a,int z,int y,int x)
{
    ans.push_back({a[x],a[y],a[z]});
    int temp=a[x];
    a[x]=a[z];
    a[z]=a[y];
    a[y]=temp;
}

void select(vector<int> &a,int j,int k) //arr,j,k=j+1
{
    for(int l=k;l<n;l++)
    {
        if(a[l]==j)
        {
            if(l-k>=2)
            {
                rotate(a,l,l-1,l-2);
                break;
            }
            else
            {
                rotate(a,l+1,l,l-1);
                break;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a;
        int count=0,temp;
        cin>>n>>K;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            a.push_back(temp);
        }
        int inv=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j] && i<j)
                    inv++;
            }
        }
        if(inv%2!=0)
            printf("-1\n");
        else
        {
            for(int j=0,k=1;j<n && k<n; )
            {
                if(a[j]!=k)
                {
                    select(a,k,j);
                    if(a[j]==k)
                    {
                        j++;
                        k++;
                        count++;
                    }
                }
                else
                {
                    j++;
                    k++;
                    count++;
                }
            }
            if(count==n-1 && ans.size()<=K)
            {
                printf("%d\n",ans.size());
                for(int i=0;i<ans.size();i++)
                    printf("%d %d %d\n",ans[i][0],ans[i][1],ans[i][2]);
            }
            else
                printf("-1\n");
            ans.clear();
        }
    }
    return 0;
}
