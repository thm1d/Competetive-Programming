#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;

    long long ori = 1 , cop = 0;

    while(ori < y)
    {
        ori++;
        cop++;
    }

    while(cop >0 && cop < x)
        cop += 2;

    printf(ori == y && cop == x ? "Yes" : "No");
    return 0;
}
