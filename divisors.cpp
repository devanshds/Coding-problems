

// A O(sqrt(n)) program that prints all divisors
// in sorted order
#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > v;
// function to print the divisors
bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
void printDivisors(int n)
{
    // Vector to store half of the divisors
    int count =0,prime=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i) // check if divisors are equal
            {
                if(isPrime(i))
                    prime++;
                count++;
            }
            else
            {
                if(isPrime(i))
                    prime++;
                if(isPrime(n/i))
                    prime++;


                // push the second divisor in the vector
                count+=2;
            }
        }
    }
    vector<int> a;
    a.push_back(prime);
    a.push_back(count);
    v.push_back(a);

    // The vector will be printed in reverse
    //printf(" || X: %d || K: %d",count,prime);
}

/* Driver program to test above function */
int main()
{
    for(int i=0;i<1000000;i++)
    {
        //printf("%d",i);
        printDivisors(i);
        //printf("\n");
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i][0]!=v[i+1][0] || v[i][1]!=v[i+1][1])
            cout<<v[i][0]<<" "<<v[i][1]<<"\n";
    }

    return 0;
}
