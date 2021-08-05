#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m],ao=0,ae=0,bo=0,be=0,ans=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            ae++;
        else
            ao++;
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        if(b[i]%2==0)
            be++;
        else
            bo++;
    }
    if(ae>bo)
        ans+=bo;
    else
        ans+=ae;
    if(ao>be)
        ans+=be;
    else
        ans+=ao;
    cout<<ans;
    return 0;
}
