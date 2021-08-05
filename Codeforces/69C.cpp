#include <bits/stdc++.h>
using namespace std;

vector<long long>v;

int main()
{
    long long x,n,m;
    cin>>n>>m;

    vector<long long> v;


    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    vector<int> v2;

    for(int i=1; i<v.size(); i++)
    {
        v2.push_back(v[i]-v[i-1]);
    }

    sort(v2.begin(),v2.end());

    long long j = n-m;
    long long ans=0;
    for(int i=0; i<j; i++)
    {
        ans+=v2[i];
    }

    cout<<ans;


}
