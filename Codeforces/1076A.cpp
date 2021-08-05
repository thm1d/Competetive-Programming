#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1],b[n+1];
    cin>>a;
    a[n+1]='\0';
    for (int i=0; i<n+1; i++)
    {
        b[i]=a[i];
    }
    int m='a',x;

    for (int i=0; i<n+1; i++)
        if (a[i] >= m)
        {
            m = a[i];
            x=i;
        }
    for(int j=x; j<n; j++)
    {
        a[j]=a[j+1];
    }
    std::string s(a);
    std::string t(b);
    string str[2];
    str[1] = s;
    str[2] = t;
    if(str[1]<str[2])
        cout<<str[1];
    else
        cout<<str[2];

    return 0;
}
