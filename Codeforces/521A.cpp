#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,a,b,k,ans1,ans2;
    cin>>t;
    while(t--)
    {
        long long int ans;
        cin>>a>>b>>k;
        ans1 = (long long int)(ceil(k/2)*a);
        ans2 = (long long int)(floor(k/2)*b);
        ans = ans1-ans2;
        cout<<ans<<endl;
    }

    return 0;
}
