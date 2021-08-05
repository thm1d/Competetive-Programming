#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0;
    cin>>n;
    char a[n*n];
    for(int i=0; i<(n*n); i++)
        cin>>a[i];
    if(a[0]=='.' || a[n-1]=='.' || a[(n*n)-1]=='.')
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0; i<(n*n)-1; i++)
    {
        if(a[i]=='.')
        {
            if(a[n+i-1]=='.' && a[n+i]=='.' && a[n+i+1]=='.' && a[(2*n)+i]=='.' )
            {
                a[i]='1';
                a[n+i-1]='1';
                a[n+i]='1';
                a[n+i+1]='1';
                a[(2*n)+i]='1';
            }
            else
            {
                temp=1;
                break;
            }

        }
    }
    if(temp==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
