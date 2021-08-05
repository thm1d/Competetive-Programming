#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,temp=0;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        n=s.length();
        temp=0;
        for(int i=1; i<s.length(); i++)
        {
            if(abs(s[i-1]-s[i])==1)
            {
                for(int j=0; j<s.length(); j++)
                {
                    if(abs(s[i]-s[j])>=2)
                    {
                        swap(s[i],s[j]);
                    }
                }
            }
        }
        for(int i=1; i<s.length(); i++)
        {
            if(abs(s[i-1]-s[i])==1)
            {
                for(int j=0; j<s.length(); j++)
                {
                    if(abs(s[i]-s[j])>=2)
                    {
                        swap(s[i],s[j]);
                    }
                }
            }
        }

        cout<<s<<endl;
    }
    return 0;
}
