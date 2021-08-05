#include<bits/stdc++.h>
using namespace std;
int sumOfdiv(int n);
int main()
{
    int n;
    cin>>n;
    int sum=0,ans;
    sum=sumOfdiv(n);
    if(sum%4==0)
        ans=n;
    else
    {
        while(sum%4!=0)
        {
            n++;
            sum=sumOfdiv(n);
        }
        ans=n;
    }
    cout<<ans;
    return 0;
}

int sumOfdiv(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
