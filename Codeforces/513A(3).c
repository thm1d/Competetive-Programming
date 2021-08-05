#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,L,V,l,r;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>L>>V>>l>>r;

        int ans = 0;

        ans = L/V;

        double a = (l*1.0)/V;
        a = ceil(a);
        double b = (r*1.0)/V;
        b = floor(b);

        //cout<<b<<" "<<a<<"\n";

        if(a >= 1.0 && b>= 1.0)
            ans = ans-((b-a)+1);
        else if(b >= 1.0)
            ans = ans-b;

        cout<<ans<<"\n";
    }
    return 0;
}
