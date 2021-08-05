#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c=0,i;
    cin>>n;
    vector<int> v;
    for ( i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    int ans1=v[n-1],ans2=0;
    for(i=0; i<n-1; i++)
    {
        if(v[i]==v[i+1])
            continue;
        if(v[n-1]%v[i]==0)
        {
            v.erase(v.begin()+i);
            c++;
            i--;
        }
    }

    ans2 = v[n-c-2];
    cout<<ans1<<" "<<ans2;

    return 0;
}

