#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j=0,k=0,l=0,cnt=0,x,y,z,sum=0;
    cin>>n;
    long long int a[n],b[n],c[n];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(int m=0; m<n; m++)
    {
        for(i=0; i<n; i++)
        {
            if(i==k)
            {
                k++;
                continue;
            }
            else
            {
                b[j]=a[i];
                j++;
            }
        }

        x=*max_element(b,b+n-1);
        y=max_element(b,b+n-1)-b-1;

        for(i=0; i<n-1; i++)
        {
            if(i==y)
                continue;
            else
                sum = sum + b[i];
        }
        if(sum==b[y])
        {
            cnt++;
            c[l]=y+1;
            l++;

        }

    }
    cout<<cnt;
    return 0;
}
