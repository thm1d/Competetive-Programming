#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,one=0,two=0,j=0,k=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==1)
            one++;
        else
            two++;
    }
    if(two>=1)
    {
        cout<<"2"<<" ";
        k++;
    }
    if(one>=1)
    {
        cout<<"1"<<" ";
        j++;
    }
    while(k<two)
    {
        cout<<"2"<<" ";
        k++;
    }
    while(j<one)
    {
        cout<<"1"<<" ";
        j++;
    }
    return 0;
}
