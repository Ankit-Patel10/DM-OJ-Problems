#include <bits/stdc++.h>


int main() {
    int k;
    cin >> k;
    int num[k];
    
    for(int i = 0; i < k; i++) {
        cin >> num[i];
    }
    
    double sum = 0;
    for(int j = 0; j < k; j++) {
        sum += num[j];
        if (num[j] == 0) {
            int k = j-1;
            while(num[k] == 0) {
                k--;
            }
            sum -= num[k];
            num[k] = 0;
        }
    }
    cout << sum;
    
    return 0;
}
