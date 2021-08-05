#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> PII;

vector<PII>v;
bool cmp(PII A,PII B)
{
    return A.second*B.first>A.first*B.second; //A.price/A.weight > B.price/B.weight
}
int main()
{
    int n,W;
    cin>>n>>W;
    for(int i=0;i<n;i++)
    {
        int weight,price;
        cin>>weight>>price;
        v.push_back(PII(weight,price));
    }
    sort(v.begin(),v.end(),cmp);
    int ans=0,z;
    for(int i=0;i<n;i++)
    {
        z=min(W,v[i].first);
        W=W-z;
        ans=ans+z*(v[i].second/v[i].first);
    }
    cout<<"Maximum Cost : "<<ans<<endl;
    return 0;
}
