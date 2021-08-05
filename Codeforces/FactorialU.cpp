#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,j,temp;
    int arr[200];
    arr[0]=1;
    j=0;//for index of array arr
    cout<<"Enter the number.:";
    cin>>n;
    for(int i=n; i>=2; i--)
    {
        temp=0;
        for(int k=0; k<=j; k++)
        {
            temp=(arr[k]*i)+temp;
            arr[k]=temp%10;
            temp=temp/10;
        }
        while(temp>0)//for
        {
            arr[++j]=temp%10;
            temp=temp/10;
        }
    }
    for(int i=j; i>=0; i--)
        printf("%d",arr[i]);
    return 0;
}
