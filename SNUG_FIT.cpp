#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,T;
	long int temp,sum;
	vector<long> A,B,result;
	cin>>T;
	for(;T!=0;T--) {
	    sum=0;
	    cin>>N;
	    for(int a=N;a!=0 && cin>>temp;a--)
            A.push_back(temp);
	    for(int b=N;b!=0 && cin>>temp;b--)
            B.push_back(temp);
        sort(A.begin(),A.end());
	    sort(B.begin(),B.end());
	    for(int i=0;i<N;i++) {
	        if(A[i]<=B[i])
	            sum+=A[i];
	        else
	            sum+=B[i];
	    }
	    result.push_back(sum);
	}
	for(int i=0;i<result.size();i++) {
	    cout<<result[i];
	}


	return 0;
}
