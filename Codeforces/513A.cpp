#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0,sz;
    cin>>n;
    char ch[n];
    for(i=0;i<n;i++)
    {
        cin>>ch[i];
        if(ch[i]=='8')
            c++;
    }
    if((n/11) >= c )
        cout<<c;
    else
        cout<<(n/11);
    return 0;
}

