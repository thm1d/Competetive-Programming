#include<bits/stdc++.h>
using namespace std;

int countFreq(string &pat, string &txt);

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,y,z,temp=0;
        double ans=0,x;
        cin>>n;
        string str[n];
        for(int i=0; i<n; i++)
            cin>>str[i];
        string str1[8] = {"df","fd","dd","ff","jk","kj","jj","kk"};
        for(int i=0; i<n; i++)
        {
            temp=0;
            for(int k=0; k<i; k++)
            {
                if(str[i]==str[k])
                {
                    temp=1;
                    break;
                }
            }
            if(temp==1)
                ans = ans+(((str[i].length())*0.1));
            else
                ans = ans+(((str[i].length())*0.2));
            for(int j=0; j<8; j++)
            {
                x = countFreq(str1[j],str[i]);
                if(temp==1)
                    ans = ans + ((x*0.1));
                else
                    ans = ans + ((x*0.2));
            }
        }
        cout<<ans*10<<endl;
    }
    return 0;
}


int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;

        if (j == M)
        {
            res++;
            j = 0;
        }
    }
    return res;
}
