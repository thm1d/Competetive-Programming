#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=n-1;
    long long int i,a[m],b[n],j=0;
    for(i=0; i<m; i++)
        cin>>a[i];
    int x=a[m-1];
    if(x==1)
    {
        cout<<"1"<<" "<<n;
        return 0;
    }
    int r=a[x-2];
    while(r!=1)
    {
        b[j]=r;
        r=a[r-2];
        j++;
    }

    cout<<"1 ";
    for(i=j-1; i>=0; i--)
        cout<<b[i]<<" ";
    cout<<a[m-1]<<" "<<n;
    return 0;
}
