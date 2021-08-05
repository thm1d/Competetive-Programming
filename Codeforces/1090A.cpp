#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j=0,k,x,m=0;
    cin>>n;
    int a[n],c[n];
    int b[n] = {0};
    long long int ans =0;
    for( i=0; i<n; i++)
    {
        cin>>a[i];

        for( k=j; k<j+a[i]; k++)
        {
            cin>>x;
            b[i] = max(b[i],x);
        }

        m = max(m,b[i]);
    }

    for( i=0; i<n; i++)
        ans = ans +  (long long)a[i] * (long long)(abs(b[i]-m));

    cout<<ans;

    return 0;
}
