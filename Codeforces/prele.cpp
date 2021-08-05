#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n,c=0;

    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long int arr[n];
        for(int j=0; j<n; j++)
            cin>>arr[j];
        int m = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr+m, greater<int>());
        for(int j=0; j<n; j++)
        {
            if(arr[j]>=arr[k-1])
                c++;
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}
