#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,r,temp=1;
        cin>>n;
        long long int ara[n];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }
        for(i=1; i<n; i++)
        {
            if(ara[i-1]>=ara[i])
            {
                r=i;
                cout<<r<<endl;
                break;
            }
        }
        if(r==n-1)
            cout<<"YES"<<endl;
        else
        {
            cout<<"in else"<<endl;

            for(i=r+1; i<n; i++)
            {
                if(ara[i] <= ara[i-1])
                {
                    cout<<"in loop ";
                    temp=0;
                    break;
                }
            }
            if(temp==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
    return 0;
}
