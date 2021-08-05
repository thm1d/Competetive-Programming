#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            if(a[i-1]>=1)
            {
                a[i-1]=a[i]+a[i-1];
                i--;
                n--;
            }
    }
    a[1]+=a[n];
    int m=a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > m)
            m = a[i];

    cout<<m;
    return 0;
}
