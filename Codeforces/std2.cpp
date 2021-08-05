#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    if(is_sorted(a,a+n))
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
    return 0;
}
