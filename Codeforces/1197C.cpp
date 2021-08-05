#include<bits/stdc++.h>
using namespace std;
const int N = int(3e5) + 228, mod = int(1e9)  + 7;
int n,k, a[N],b[N];
int main ()
{
    cin>>n>>k;
    k = n - k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
    for(int i = 1; i < n; i++)
        b[i] = a[i + 1] - a[i];
    sort(b + 1, b + n);
    int ans = 0;
    for(int i = 1; i <= k; i++)
        ans += b[i];
    cout << ans;
    return 0;
}
