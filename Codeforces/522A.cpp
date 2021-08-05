#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,c=0,y;
    scanf("%d%d",&n,&k);
    int l=k;
    int a[n],b[110]= {0};
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(i=0; i<110; i++)
    {
        if(b[i]>0)
            c++;
    }

    y=*max_element(b,b+100);
    int x;
    if(y>=k)
    {
        x = (y / l) + ((y % l) != 0);
    }
    else
        x=1;
    int z= c*x*l;
    cout<<z-n;

    return 0;
}
