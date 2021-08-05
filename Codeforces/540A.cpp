#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long int n,a,b;
        cin>>n>>a>>b;
        if(n==1)
            cout<<a<<endl;
        else if(a<b)
        {
            if(n%2==0)
                 cout<<min((n*a),(n/2*b))<<endl;
            else
                 cout<<min((n*a),(n/2*b+a))<<endl;
        }
        else
        {
            if(n%2==0)
                cout<<(n/2)*b<<endl;
            else
                cout<<((n/2)*b)+a<<endl;
        }
    }
    return 0;
}
