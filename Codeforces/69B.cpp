    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        long long n,i,j,k,l,m=0,x[200009];
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x[i];
            if(m<x[i])
            {
                m=x[i];
                l=i;
            }
        }
        //cout<<m<<" "<<l<<endl;
        for(i=l;i>=1;i--)
        {
            if(x[i]<x[i-1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        for(i=l;i<n-1;i++)
        {
            if(x[i]<x[i+1])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
