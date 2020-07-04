/*
RANSOM NOTE

A criminal is constructing a ransom note. In order to disguise his handwriting, he is cutting out letters from a magazine.

Given a magazine of letters and the note he wants to write, determine whether he can construct the word.

Input: ['a', 'b', 'c', 'd', 'e', 'f'], 'bed'
Output: True

Input: ['a', 'b', 'c', 'd', 'e', 'f'], 'beds'
Output: False
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    char temp;
    int m[26]={0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        m[temp-'a']++;
    }
    cin>>s;
    int ans=1;
    for(int i=0;i<s.length();i++)
    {
        m[s[i]-'a']--;
        if(m[s[i]-'a']<0)
        {
            ans=0;
            break;
        }
    }
    if(ans)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}
