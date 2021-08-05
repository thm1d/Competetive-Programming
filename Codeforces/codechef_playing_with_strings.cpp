#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c1=0,c3=0;
        cin>>n;
        string s,r;
        cin>>s>>r;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                c1++;
            if(r[i]=='1')
                c3++;
        }
        //cout<<c1<<" "<<c3<<endl;
        if(c1==c3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
