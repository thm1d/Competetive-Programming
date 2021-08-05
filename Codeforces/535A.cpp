#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a!=c)
            cout<<a<<" "<<c<<endl;
        else
            cout<<a<<" "<<c+1<<endl;

    }
    return 0;
}
