#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int list[n];
    for (int i = 0; i < n; i++) {
        int k = 0;
        cin >> k;
        list[i] = k;
    }
    int temp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < (n-i); j++) {
            if (list[j-1] > list[j]) {
                //swap
                temp = list[j-1];
                list[j-1] = list[j];
                list[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << list[i];
        cout << "\n";
    }
    return 0;
}