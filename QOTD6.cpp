/*
	Q. Given an array of integers, return a new array where each element in the new array is
       the number of smaller elements to the right of that element in the original input array.
	Input:   [3, 4, 9, 6, 1]

	Output: [1, 1, 2, 1, 0]
	1
        6
    4
 3          9

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base:sync_with_stdio(false);
    cin.tie(NULL);
    int n,temp,count=0;
    cin>>n;
    vector<int> a,res;
    while(n--)
    {
        cin>>temp;
        a.push_back(temp);
    }

}
