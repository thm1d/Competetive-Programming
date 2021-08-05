#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[100];
    gets(str);
    printf("%s",str);
    //string str1 = "1 0 1";
    //int ans = countFreq(str1,str);
    //cout<<ans;
    return 0;

}

/*int countFreq(string &pat, string &txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;

     A loop to slide pat[] one by one
    for (int i = 0; i <= N - M; i++)
    {
        /* For current index i, check for
           pattern match
        int j;
        for (j = 0; j < M; j++)
            if (txt[i+j] != pat[j])
                break;

        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M)
        {
           res++;
           j = 0;
        }
    }
    return res;
}*/

