#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,r,ans,x,y,z;
    cin>>n>>m>>r;
    int s[n],b[m];
    for(int i=0;i<n;i++)
        cin>>s[i];
    sort(s,s+n);
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b,b+m);

    if(s[0]>b[m-1] || r<s[0])
        ans=r;
    else
    {
        x=r/s[0];
        ans=r%s[0];
        ans=ans+x*b[m-1];
    }
    cout<<ans;
    return 0;
}
