#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=0,sum=1,c=0,x,y=0,z;
        cin>>n;
        int i,a[n];
        for(i=0; i<n; i++)
            cin>>a[i];
        if(a[0]>=n) cout<<"1"<<endl;
        else
        {
            for(j=0; j<sum; j++)
            {
                y=sum+a[i];
                if(j==(sum-1))
                {
                    cout<<"a";
                    c++;
                    sum=y;
                }
                if(y>=n)
                {
                    cout<<c+1<<endl;
                    break;
                }

            }
        }
    }
    return 0;
}
