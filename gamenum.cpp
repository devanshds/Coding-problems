#include <bits/stdc++.h>
using namespace std;

string binary(long long int n)
{
    string str;
    for(;n>0;n/=2)  n%2==0 ? str+='0' : str+='1';
    reverse(str.begin(),str.end());
    return str;
}
long long int decimal(string str)
{
    long long int n=0;
    reverse(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        int val=str[i];
        if(val=='1')
            n+=pow(2,i);
    }
    return n;
}
void addZeros(string& str, int n)
{
    for (int i = 0; i < n; i++) {
        str = "0" + str;
    }
}
long long int getXOR(string a, string b)
{
    int aLen = a.length();
    int bLen = b.length();
    if (aLen > bLen) {
        addZeros(b, aLen - bLen);
    }
    else if (bLen > aLen) {
        addZeros(a, bLen - aLen);
    }

    int len = max(aLen, bLen);
    string res = "";
    for (int i = 0; i < len; i++) {
        if (a[i] == b[i])
            res += "0";
        else
            res += "1";
    }
    long long int _xor=decimal(res);
    return _xor;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,maxxor;
        string stra,strb,rotb;
        cin>>a>>b;
        stra=binary(a);
        strb=binary(b);
        rotb=strb;
        int opr=0;
        maxxor=a^b;
        for(int i=0;i<strb.length();i++)
        {   rotate(rotb.begin(), rotb.begin()+rotb.size()-1, rotb.end());
            if(rotb==strb)
            {
                break;
            }

            long long int newxor=getXOR(stra,rotb);
            if(newxor>=maxxor)
            {
                maxxor=newxor;
                opr=i+1;
            }

        }
        if(opr==0)
            printf("0 0\n");
        else
            printf("%d %lld\n",opr,maxxor);
    }

	return 0;
}
