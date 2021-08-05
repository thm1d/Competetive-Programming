#include <iostream>
#include <cstdio>
#include <vector>
#include <deque>
#include <algorithm>
#include <math.h>
#include <string>

int main(){
    int n;
    int ans = 0;
    bool flag = true;
    std::cin >> n;
    int a[n];
    for (int i=0; i<n; ++i){
        std::cin >> a[i];
    }
    for (int i=1; i<n; ++i){
        if (a[i] == 2 && a[i-1] == 3 || a[i] == 3 && a[i-1] == 2){
            flag = false;
        }
        else{
            if (i-2 >= 0){
                if (std::abs(a[i] - a[i-1]) == 2){
                    ans+= 4;
                }
                else{
                    ans += 3;
                    if (a[i] == 2 && a[i-2] == 3) ans--;
                }
            }
            else {
                if (std::abs(a[i] - a[i-1]) == 2){
                    ans+= 4;
                }
                else{
                    ans += 3;
                }
            }
        }
    }
    if (flag){
        std::cout << "Finite" << std::endl << ans;
    }
    else {
        std::cout << "Infinite";
    }
}
