#include<bits/stdc++.h>
using namespace std;
int answer(int a[],int x,int y);
int main()
{
    int n,i,j=0;
    cin>>n;
    if(n==1)
    {
        cout<<j;
        return 0;
    }
    int a[n];
    for( i=0; i<n; i++)
        cin>>a[i];

    while(j<n-1)
    {
        j=answer(a,j,n-1);
    }
    {
        extern int r;
        cout<<r;
    }

    return 0;
}

int r=0;
int answer(int a[],int x,int y)
{
    int i;
    for( i=x; i<y; i++)
    {
        if(a[i]+1 == a[i+1])
            r++;
        else
        {
            if(i>x)
            {
                if(a[x]!=1 && a[i+1] != 1000)
                    r--;
                    break;
            }
            else
                break;
        }
    }

    return i+1;
}
