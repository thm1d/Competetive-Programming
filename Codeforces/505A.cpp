#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,flag=0,j;
    cin>>n>>k;
    string str;
    cin>>str;

    int length = str.length();

    if(length == 1)
    {
        for(i=1; i<=k; i++)
            cout<<str;
        return 0;
    }


    if(str[0] != str[length-1])
    {
        flag = 1;
    }
    if(flag)
    {
        for(i=1; i<=k; i++)
            cout<<str;
        return 0;
    }
    else
    {
        for(i=1; i<=k; i++)
        {
            if(i==1)
                cout<<str;
            else
                for(j=1; j<length; j++)
                    printf("%c",str[j]);
        }
    }
    return 0;

}
