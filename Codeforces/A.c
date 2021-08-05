#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    int ara[4],ara1[n];
    int sum=0;

    for( i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            scanf("%d",&ara[j]);
            sum=sum+ara[j];
        }
        ara1[i]=sum;
    }
    for( i=1;i<n;i++)
    {
        if(ara1[0]>=ara1[i])
            p++;
    }
    printf("%d",n-p);
    return 0;
}
