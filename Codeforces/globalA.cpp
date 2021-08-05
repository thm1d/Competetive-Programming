#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans1,ans2,ans;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(a[0]!=a[n-i-1])
        {
            ans1=n-i-1;
            break;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(a[n-1]!=a[i])
        {
            //cout<<a[n-1]<<" "<<a[i]<<" "<<i<<endl;
            ans2=n-i-1;
            //cout<<ans2<<endl;
            break;
        }
    }
    if(ans1>=ans2)
    {
        if(ans1>n-ans1-1)
            cout<<ans1;
        else
            cout<<n-ans1-1;
    }
    else
    {
        if(ans2>n-ans2-1)
            cout<<ans2;
        else
            cout<<n-ans2-1;
    }
    return 0;
}
