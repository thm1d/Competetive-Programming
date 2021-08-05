#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int searchString(string &arr[], string &s);
int main()
{
   string s[3] = {"aa", "ab", "aa"};
   string t= "aa";
   cout<<searchString(s[3],t)
}

 int searchString(string &arr[], string &s)
    {
            int counter = 0;
            for (int j = 0; j < arr.length; j++)

                /* checking if string given in query is
                  present in the given string. If present,
                  increase times*/
                if (s.equals(arr[j]))
                    counter++;

           return counter;
    }
