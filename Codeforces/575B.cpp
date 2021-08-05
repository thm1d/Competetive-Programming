#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],c=0,ans[n],j=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                c++;
                ans[j++]=i;
            }
        }
        if(c!=k)
            cout<<"NO"<<endl;
        else
        {
            int f=1;
            for(int i=0; i<c; i++)
            {
                if(a[ans[i]+1]%2!=0 && ans[i]<n-1)
                {
                    if(ans[i]==0)
                    {
                        if(a[ans[i]+2]%2!=0)
                        {
                            f=0;
                            break;
                        }
                        else
                            f=1;
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
                else
                    f=1;
                if(a[ans[i]-1]%2!=0 && ans[i]>0)
                {
                    if(ans[i]==n-1)
                    {
                        if(a[ans[i]-2]%2!=0)
                        {
                            f=0;
                            break;
                        }
                        else
                            f=1;
                    }
                    else
                    {
                        f=0;
                        break;
                    }
                }
                else
                    f=1;
            }
            if(f)
            {
                cout<<"YES"<<endl;
                for(int i=0; i<c; i++)
                    cout<<ans[i]+1<<" ";
                cout<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
