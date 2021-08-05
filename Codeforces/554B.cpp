#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans1=0,ans2;
    cin>>n;
    double m=log2(n);
    int x=(int)m;
    if(m!=x)
        x=x+1;
    ans1=x;
    x=pow(2,x)-1;
    n=n^x;
    cout<<n<<endl;
    n=n+1;
    x=ans1;
    ans2=x;
    x=pow(2,x)-1;
    n=n^x;
    cout<<n<<endl;
    cout<<"2"<<endl;
    cout<<ans1<<" "<<ans2;
    return 0;
}
