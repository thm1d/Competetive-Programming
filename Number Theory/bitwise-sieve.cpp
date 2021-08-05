// C++ program to implement bitwise Sieve
// of Eratosthenes.
#include<bits/stdc++.h>
using namespace std;

int N =100,prime[100];
int status[100/32];

// checks whether the pos'th bit is 1 or 0
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

// set the value at pos'th position 1 or 0
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}

void sieve()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( N ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= N; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    cout<<"2 ";
    for(i=3; i<=N; i+=2)
        if( Check(status[i>>5],i&31)==0)
            cout<<i<<" ";
}

int main()
{
    sieve();
    return 0;
}
