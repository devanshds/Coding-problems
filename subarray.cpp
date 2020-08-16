#include<bits/stdc++.h>
using namespace std;
int main()
{
    int temp,n1,n2;
    cin>>n1>>n2;
    vector<int> a,b; //b is in a or not
    for(int i=0;i<n1;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0;i<n2;i++)
    {
        cin>>temp;
        b.push_back(temp);
    }
    //Main logic
    int flag=0;
    for(int i=0,j=0; i<n1; i++)
    {
        if(a[i]==b[j])
        {
            j++;
            if(j==n2)
            {
                flag=1;
                break;
            }
        }
        else
            j=0;

    }
    if(flag)
        cout<<"true";
    else
        cout<<"false";
    return 0;
}
