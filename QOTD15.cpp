/*
QOTD #15

Given a string of length n and integer k.
The string can be manipulated by taking one of the first k letters and moving it to the end of the string.

Write a program to determine the lexicographically smallest string that can be created after an unlimited number of moves.

Input:
string: "daily"
k = 1

Output:

"ailyd"

Input:
string: "mjadi"
k = 2

Output:
"adijm" ijmda mdaji ajidm idmja mjadi adimj

k=3
zxacb

cbaxz

xzabc
bcaxz
axzbc

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    string s;
    cin>>s;
    cin>>k;
    n=s.length();
    char sml='z';
    int sml_idx;
    for(int i=0;i<n;i++)
    {
        if(s[i]<sml)
    }


    return 0;
}
