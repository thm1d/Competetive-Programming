#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,x;
    while(cin>>m>>n>>x)
    {
        if(x==0)
        {
            cout<<m<<" "<<"0"<<endl;
            continue;
        }
        int a[n],b[n],c1=0,c2=0,ans1,ans2;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {

            b[i]=x/a[i];
            a[i]=x%a[i];
            if(a[i]>0)
                c1++;
            c2=c2+b[i];
        }
        ans1=m-c2;
        if(ans1<c1)
        {
            c1=ans1;
            ans1=0;
        }
        else
            ans1=ans1-c1;
        ans2=c1;
        cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}
