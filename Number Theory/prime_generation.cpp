#include <bits/stdc++.h>
using namespace std;

int* prime_generator(int low, int high, int* arr) {
    int c=0, temp;
    bool isPrime;
    memset(arr, 0, sizeof(arr));
    if (low > high)
    {
        temp = low;
        low = high;
        high = temp;
    }

    while (low < high)
    {
        isPrime = true;
        if (low == 0 || low == 1)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i <= sqrt(low); ++i)
            {
                if (low % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime)
        {
            arr[c] = low;
            //cout<< low << " ";
            c++;
        }
        ++low;
    }
    return arr;
}

int main()
{
    int low, high, temp, i,c = 0, arr[100001];
    bool isPrime;

    cout << "Enter two numbers (intevals): ";
    cin >> low >> high;

    int* ans = prime_generator(low, high, arr);
    cout << "\nPrime numbers between " << low << " and " << high << " are:" << endl;
    for (int i=0; i<100; i++)
    {
        if(ans[i]!=0)
            cout<<ans[i]<<" ";
        else
            break;
    }
    return 0;
}



