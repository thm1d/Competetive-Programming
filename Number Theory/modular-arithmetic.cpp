#include<bits/stdc++.h>
using namespace std;
#define i64 long long
i64 M=12;
i64 F(i64 N,i64 P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
	    cout<<N<<" "<<P<<endl;
		i64 ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else
    {
        cout<<N<<" "<<P<<endl;
        return ((N%M)*(F(N,P-1)%M))%M;
    }

}


int main()
{
    i64 ans;
    ans=F(2,100);
    cout<<ans<<endl;

    return 0;
}
