#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,r=0,temp=1;
        cin>>n;
        long long int ara[n];
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
        }


        if(n==2) cout<<"YES"<<endl;

        else
        {
            int smallest = ara[0];
            for ( i = 0; i < n; i++)
            {
                if (ara[i] < smallest)
                {
                    smallest = ara[i];
                    r=i;
                }
            }
            if(r==0)
            {
                for ( i=0; i<n-1; i++)
                {
                    if (ara[i] > ara[i+1] )
                    {
                        temp=0;
                        break;
                    }
                }
            }
            else
            {
                int ara1[r],ara2[n-r],j=0;
                for(i=0; i<r; i++)
                    ara1[i]=ara[i];
                for(i=r; i<n; i++)
                {
                    ara2[j]=ara[i];
                    j++;
                }


                for (int i=0; i<r; i++)
                {
                    if (ara1[i] > ara1[i+1] )
                    {
                        temp=0;
                        break;
                    }
                }
                for (int i=0; i<n-r; i++)
                {
                    if (ara2[i] > ara2[i+1])
                    {
                        temp=0;
                        break;
                    }
                }
            }
            if(temp==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}


