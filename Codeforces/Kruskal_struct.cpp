#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int u,v,w;
};

bool cmp(Edge A,Edge B)
{
    return A.w<B.w;
}

int p[100];
vector<Edge>E(100);

int find(int x)
{
    if(p[x]==x)
        return x;
    return p[x]= find(p[x]);
}

int main()
{
    for(int i=0;i<100;i++)
        p[i]=i;
    int e,v;
    cin>>e>>v;
    for(int i=0; i<e; i++)
    {
        cin>>E[i].u>>E[i].v>>E[i].w;
    }
    sort(E.begin(),E.end(),cmp);
    int sz=E.size();
    int ans=0;
    for(int i=0;i<sz;i++)
    {
        if(find(E[i].u)!=find(E[i].v))
        {
            p[p[E[i].u]]=p[E[i].v];
            ans+=E[i].w;
            cout<<E[i].u<<"---"<<E[i].v<<"  : "<<E[i].w<<endl;
        }
    }
    cout<<"Cost : "<<ans<<endl;
    return 0;
}
