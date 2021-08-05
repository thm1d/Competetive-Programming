#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp = 0;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n/2; j++)
        {
            if(a[i][j]==a[i][n-j-1])
                temp=0;
            else
                temp=1;
            if(a[j][i]==a[n-j-1][i])
                temp = 0;
            else
                temp = 1;
        }
    }
    if(temp==1)
        cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout<<a[j][i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
