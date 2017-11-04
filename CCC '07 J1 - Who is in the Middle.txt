#include <bits/stdc++.h>

using namespace std;

int main() {
    int k[3];
    cin >> k[0];
    cin >> k[1];
    cin >> k[2];
    int n = sizeof(k)/sizeof(k[0]);
    int temp;
    for(int i = 0; i < n; i++) {
        for (int j = 1; j < n-i; j++) {
            if(k[j-1] > k[j]) {
                //swap
                temp = k[j-1];
                k[j-1] = k[j];
                k[j] = temp;
            }
            
        }
    }
    cout << k[1];
    return 0;
}