
#include <iostream>
using namespace std;

int palindrome(string str)
{

    int l = 0;
    int h = str.size() - 1;

    while (h > l)
    {
        if (str[l++] != str[h--])
            return 0;
    }
    return 1;
}

int main() {

	int n;
	string s;
	cin>>n;
	cin>>s;

    for (int i = n; i >= 0; i--)
        for (int len = n-i; len >= 0; len--)
        {
            string r=s.substr(len, i);
            if(palindrome(r))
            {
                cout<<r.size()<<endl<<r<<endl;
                return 0;
            }
        }

    return 0;
}

