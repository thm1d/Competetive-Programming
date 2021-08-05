#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n];
    int t = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
        if(i == 0)
            t=t+c[i]+1;
        else
        {
            t=t+c[i]-1;
            c[i]--;
        }
    }
    cout<<t<<endl;
    int leaves = 0;
    bool works = true;
    for(int i = n-1; i >= 0; i--)
    {
        if(c[i] > leaves)
            works = false;
        leaves -= c[i];
        leaves++;
    }

    if(works && t == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
