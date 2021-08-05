#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k,mini,maxi,ans=0;
        cin>>n>>k;
        int ara[n];
        for(int i=0;i<n;i++)
            cin>>ara[i];
        mini=*min_element(ara,ara+n);
        maxi=*max_element(ara,ara+n);
        int temp=0;
        if((maxi-(mini+k))>k)
            temp=1;
        if(temp)
            ans=-1;
        else
            ans=mini+k;
        cout<<ans<<endl;
    }
    return 0;
}
