#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,sum=0,x;
    cin>>n>>m;

    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    if(n==1 || m==1)
    {
        cout<<0;
        return 0;
    }
    sort(a,a+n,greater<long long int>());

    if((a[n-1]-a[n-2])==0)
        sum=sum-a[n-1]+1;
    else
        sum=sum-a[n-1];

    for(i=n-2; i>=0; i--)
    {
        x=a[i]-a[i+1];
        if(x==0)
            sum--;
        else
            sum=sum-x;

    }
    cout<<sum;
    return 0;


}
