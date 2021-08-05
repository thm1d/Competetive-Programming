#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m, i;
    int mx = 0;
    cin >> n >> m;
    int a[n];
    long long sum = 0;
    for (i = 0; i < n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sort(a, a + n );
    long long ans = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > mx)
            mx++;
    }
    ans = n + a[n-1] - mx;
    cout << sum - ans << endl;
    return 0;
}
