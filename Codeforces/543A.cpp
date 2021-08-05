#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,c=0,x,y,t=0;
    cin>>n>>m;
    x=n;
    y=n;
    if(m<n)
    {
        cout<<"-1";
        return 0;
    }
    else if(m==n)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        for(int i=n; i<=m;)
        {
            t=1;
            x=i*2;
            y=i*3;
            if(m%x==0)
            {
                i=x;
                c++;
            }
            else if(m%y==0)
            {
                i=y;
                c++;
            }
            else
            {
                c=-1;
                break;
            }
            if(x==m || y==m)
                break;

        }
    }
    if(t==0) cout<<"-1";
    else
        cout<<c;
    return 0;
}
