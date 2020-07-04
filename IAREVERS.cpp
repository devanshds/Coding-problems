#include <bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	vector<vector<string> > s;
	int n;
	string str;
	for(int i=0;i<n;i++)
	{
	    getline(cin,str);
	    vector<string> words;
	    stringstream ss(str);
	    do
        {
            string word;
            ss >> word;
            words.push_back(word);
        }while (ss);
        s.push_back(words);

	}
	for(int i=n-1;i>=0;i--)
    {
        for(int j=s[i].size()-1;j>=0;j--)
        {

        }
    }


	return 0;
}
