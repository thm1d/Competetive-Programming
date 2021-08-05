#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str[n],s=" ";
        int a[n];
        bool b[n];
        for(int i=0; i<n; i++)
        {
            getline(cin,str[i]);
            size_t found = str[i].find(s);
            a[i]=found;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(strncmp(str[i],str[j],a[i]))
                {
                    b[i]=true;
                    b[j]=true;
                }
            }
        }
        int j=0;
        for(int i=0; i<n; i++)
        {
            if(b[i])
                cout<<str[i]<<endl;
            else
            {
                while(str[i][j]!=' ')
                {
                    cout<<str[i][j];
                    j++;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
