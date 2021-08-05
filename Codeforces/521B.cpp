#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=1;i<n-1;i++)
    {
        if(a[i-1]==1 && a[i] ==0 && a[i+1] == 1)
            c++;
    }
    i=1;
    while(i<n-3)
    {
        if(a[i-1]==1 && a[i]==0 && a[i+1]==1 && a[i+2]==0 && a[i+3] ==1)
        {
            c--;
            i=i+3;
        }
        else
            i++;
    }
    cout<<c;
    return 0;
}
