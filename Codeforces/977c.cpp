#include<bits/stdc++.h>
#define forl(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    forl(i,n) cin>>a[i];
    sort(a,a+n);
    if(n==k)
        cout<<a[n-1];
    else if(k==0)
            if(a[0]>1)
                cout<<"1";
            else
                cout<<"-1";
    else if(a[k]>a[k-1])
        cout<<a[k-1];
    else
        cout<<"-1";
    return 0;
}

