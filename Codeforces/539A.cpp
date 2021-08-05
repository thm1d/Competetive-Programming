#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,j=2;
    cin>>n>>v;
    if(n<=v)
    {
        cout<<n-1;
        return 0;
    }
    int x = n-v-1;
    for(int i=1; i<=x; i++)
    {
        v=v+j;
        j++;
    }
    cout<<v;
    return 0;
}
