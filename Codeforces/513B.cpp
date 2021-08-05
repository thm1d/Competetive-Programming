#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
typedef long long ll;

int S(ll n) {
    int sum = n%10;
    while (n /= 10) sum += n%10;
    return sum;
}

int main() {
    ll n, a;
    scanf("%lld", &n);
    int digit = (int) log10(n);
    cout<<digit<<endl;
    a = n/pow(10, digit) - 1;
    cout<<a<<endl;
    while (digit--) {
        a = (a*10) + 9;
    }
    printf("%d\n", S(a) + S(n-a));

    #if 0
    cout << a << "\n";
    #endif // 1
}
