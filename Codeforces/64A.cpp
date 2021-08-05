#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=1,ans=0;
    cin>>n;
    int a[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if((a[i-1]==2 && a[i]==3) || (a[i-1]==3 && a[i]==2))
            temp=0;
    }
    if(temp==0)
    {
        cout<<"Infinite";
    }
    else
    {
        for(int i=2; i<=n; i++)
        {
            if((a[i-1]==2 && a[i]==1) || (a[i-1]==1 && a[i]==2))
                ans+=3;
            else if((a[i-1]==1 && a[i]==3) || (a[i-1]==3 && a[i]==1))
                ans+=4;
            if(a[i-2]==3 && a[i-1]==1 && a[i]==2)
                ans-=1;
        }
        cout<<"Finite"<<endl;
        cout<<ans;
    }

    return 0;
}
