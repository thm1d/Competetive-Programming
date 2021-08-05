#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,temp=0;
        cin>>n;
        int a[56] = {	6, 10, 14, 15, 21, 22, 26, 33, 34, 35, 38, 39, 46, 51, 55, 57, 58, 62, 65, 69, 74, 77, 82, 85, 86, 87, 91, 93, 94, 95, 106, 111, 115, 118, 119, 122, 123, 129, 133, 134, 141, 142, 143, 145, 146, 155, 158, 159, 161, 166, 177, 178, 183, 185, 187, 194};
        //cout<<sizeof(a);
        for(int i=0; i<56; i++)
        {
            for(int j=i; j<56; j++)
            {
                if(a[i]+a[j]==n)
                {
                    temp =1;
                          break;
                }

            }
            if (temp==1) break;
        }
        if (temp==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
