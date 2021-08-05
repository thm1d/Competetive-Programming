#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;

    cin >> a >> b >> c;
    int r,x,y;
    if (a >= b && a >= c)
    {
        r=a;
        x=b;
        y=c;
    }
    else if (b >= a && b >= c)
    {
        r=b;
        x=a;
        y=c;
    }
    else
    {
        r=c;
        x=b;
        y=a;
    }

    if(x+y>r) cout<<"0";
    else cout<<(r-(x+y)+1);
    return 0;
}
