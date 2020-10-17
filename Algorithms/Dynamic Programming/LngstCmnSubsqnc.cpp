#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> LCS_LENGTH(string a,string b)
{

    int n=a.length(),m=b.length();
    vector<vector<int> > c( n+1 , vector<int> (m+1, 0));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
                c[i][j]=c[i-1][j-1]+1;
            else
                c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    for(auto i: c)
    {
        for(auto j: i)
            cout<<j<<" ";
        cout<<"\n";
    }
    return c;
}
void PRINT_LCS(string a, vector<vector<int>> c,int i,int j)          //15.4-2 uses original length table instead of lookup but memory space is still O(m*n)
{
    if(i==0 || j==0)
        return;
    if(c[i-1][j-1]>= c[i-1][j] && c[i-1][j-1]>= c[i][j-1])
    {
        PRINT_LCS(a,c,i-1,j-1);
        cout<<a[i];
    }
    else if(c[i-1][j]>=c[i-1][j-1] && c[i-1][j]>=c[i][j-1])
        PRINT_LCS(a,c,i-1,j);
    else
        PRINT_LCS(a,c,i,j-1);
}

int OPTIMIZED_LCS_LENGTH(string a,string b)         //15.4-4  Limited to constant number of rows
{
    int n=a.length(),m=b.length();
    if(n<m)
    {
        swap(n,m);
        swap(a,b);
    }
    vector<vector<int>> c(2,vector<int> (m+1,0));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
                c[1][j]=c[0][j-1]+1;
            else
                c[1][j]=max(c[0][j],c[1][j-1]);
        }
        for(int j=1;j<=m;j++)
        {
            c[0][j]=c[1][j];
            c[1][j]=0;
        }
    }
    return c[0][m];
}



int main()
{
    string a,b;
    int n;
    cout<<"Enter two strings:\n";
    cin>>a>>b;
    cout<<"Longest Common Subsequence:\n1. Length\n2. Substring\n";
    cin>>n;
    switch(n)
    {
    case 1:
        {
            cout<<OPTIMIZED_LCS_LENGTH(a,b);
            break;
        }
    case 2:
        {
            vector<vector<int>> c;
            c=LCS_LENGTH(a,b);
            PRINT_LCS(a,c,a.length(),b.length());
            break;
        }
    default:
        cout<<"Invalid Input!";
    }

    return 0;
}
