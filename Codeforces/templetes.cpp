#include<bits/stdc++.h>
using namespace std;

template <typename T>
T add (T a,T b){
    return a+b;
    }

int main()
{
    int a = 12,b = 18;
    float x = 5.0,y = 15.5;
    cout<<add<int>(a,b)<<endl;
    cout<<add<float>(x,y)<<endl;
    return 0;
}
