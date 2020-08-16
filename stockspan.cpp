/*
STOCK SPAN PROBLEM
Q. Calculate span of stock array. Span is defined as max number of consecutive days just before the given day, for which price on current day is <= to price on given day.
eq.:
Input: 100 80 60 70 60 75 85
Output: 1  1  1  2  1  4  6
        1  2  3  1  2


*/

#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &a, int &n)
{
    vector<int> ans;
    stack<int> s;
    for(auto i: n)
    {

    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> a;
	int n,temp;
	cin>>n;
	for(auto i: n)
    {
        cin>>temp;
        a.push_back(temp);
    }
    solve(a, n);

	return 0;
}

