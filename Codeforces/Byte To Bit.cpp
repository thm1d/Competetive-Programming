#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,c=0,s=0;
        long long int r=1;
        cin>>n;
        x=n;
        while(x>26)
        {
            x=x-26;
            c++;
        }
        while(c--)
            r=r*2;
        if(x>10) cout<<s<<" "<<s<<" "<<r<<endl;
        else if(x>2) cout<<s<<" "<<r<<" "<<s<<endl;
        else cout<<r<<" "<<s<<" "<<s<<endl;
    }
    return 0;
}
