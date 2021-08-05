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

    sum=sum-n+1;

    if(a[0] == a[1])
    {
        if(a[0] > n)
            sum =sum - (a[0] - a[1]);
        else
            sum--;
    }
    else
    {
        if(a[1]<n-1)
            x = a[0]-a[1];

        else
            x = a[0]-n+1;

        sum=sum-x;
    }

    cout<<sum;
    return 0;


}
