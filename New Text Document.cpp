#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int runsA[n];
    int runsB[n];
    int sumA = 0;
    int sumB = 0;
    int k = 0;
    for(int i = 0; i < n; i++) {
        cin >> runsA[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> runsB[i];
    }
    for(int i = 0; i < n; i++) {
        sumA += runsA[i];
        sumB += runsB[i];
        if(sumA == sumB) {
            k = i+1;
        }
    }
    if(sumA == sumB) {
        cout << n << endl;
        return 0;
    }
    cout << k << endl;
    
    return 0;
}
