#include<iostream>
#include<math.h>
using namespace std;

int main() {
    long long t,L,v,l,r,i,p,a,b;
    cin>>t;
    while(t--) {
        cin>>L>>v>>l>>r;
        long long lt=0;
        p=L/v;
        a=ceil(double(l)/double(v));
        b=floor(double(r)/double(v));
        lt=p-(b-a);
        cout<<lt-1<<endl;
    }
    return 0;
}
