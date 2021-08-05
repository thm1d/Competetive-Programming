
// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    int c=0;
    for (int p=2; p<=n; p++)
       if (prime[p]) {
          cout << p << " ";
          c++;
       }
       cout<<endl<<"Total Prime = "<<c<<endl;
}

int main()
{
    int n;
    cin>>n;
    SieveOfEratosthenes(n);
    return 0;
}
