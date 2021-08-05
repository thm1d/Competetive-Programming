#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2,x,y,z,h3,m3;
    cin>>h1;
    cin.ignore();
    cin>>m1;
    cin>>h2;
    cin.ignore();
    cin>>m2;
    h3=h1;
    m3=0;
    x=(h2-h1)*60;
    y=m2-m1;
    z=(x+y)/2+m1;
    while(z>=60)
    {
        z=z-60;
        h3++;
    }
    m3=m3+z;
    if(h3<10 && m3<10)
        cout<<"0"<<h3<<":"<<"0"<<m3;
    else if(h3<10)
        cout<<"0"<<h3<<":"<<m3;
    else if(m3<10)
        cout<<h3<<":"<<"0"<<m3;
    else
        cout<<h3<<":"<<m3;
    return 0;
}
