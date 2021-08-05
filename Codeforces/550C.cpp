#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0,y=0;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        if(a[i]==a[i+1] && a[i+1]==a[i+2])
        {
            cout<<"NO";
            return 0;
        }
        else if(i%2==0)
        {
            b[x]=a[i];
            x++;
        }
        else
        {
            c[y]=a[i];
            y++;
        }
    }

    cout<<"YES"<<endl;
    cout<<x<<endl;
    for(int i=0; i<x; i++)
        cout<<b[i]<<" ";
    cout<<"\n";
    cout<<y<<endl;
    for(int i=y-1; i>=0; i--)
        cout<<c[i]<<" ";
    return 0;
}
