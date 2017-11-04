#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m;
    cin >> n;
    int ways = 0;
    if (m > 10 && n > 10) {
    for(int i = 1; i < 11; i++) {
        for (int k = 1; k < 11; k++) {
            if (i+k == 10) {
                ways++;
            }
        }
    }
   }
   
   else if (m <= 10 && n <= 10) {
    for(int i = 1; i <= m; i++) {
        for (int k = 1; k <= n; k++) {
            if (i+k == 10) {
                ways++;
            }
        }
    }
   }
   
   else if (m <= 10 && n > 10) {
    for(int i = 1; i <= m; i++) {
        for (int k = 1; k < 11; k++) {
            if (i+k == 10) {
                ways++;
            }
        }
    }
   } 
   
   else if (m > 10 && n <= 10) {
    for(int i = 1; i < 11; i++) {
        for (int k = 1; k <= n; k++) {
            if (i+k == 10) {
                ways++;
            }
        }
    }
   } 
   
   if (ways == 1) {
       cout << "There is " << ways << " way to get the sum 10.";
       return 0;
   }
   cout << "There are " << ways << " ways to get the sum 10.";
   
    return 0;
}