#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n,t;
    cin>>n>>t;
    int x[n],y[n],ans1=100007,ans2=0,m=0;
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
        if(x[i]>=t && x[i]<=ans1)
        {
            ans1=x[i];
            ans2=i+1;
        }
    }
    if(ans2>0)
    {
        cout<<ans2;
        return 0;
    }
    else
    {
        ans2=1;
        for(int i=0; i<n; i++)
        {
            while(x[i]<t)
            {
                x[i]=x[i]+y[i];
            }
            m = x[0];
        }

        for(int i = 0; i < n; i++)
        {
            if(m > x[i])
            {
                m = x[i];
                ans2=i+1;
            }
        }
        cout<<ans2;
        return 0;
    }

}
