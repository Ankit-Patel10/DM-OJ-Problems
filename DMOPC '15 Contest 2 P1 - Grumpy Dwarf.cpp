#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    cin >> k;
    int totalswords = n;
    int trade;
    while(n >= k) {
        trade = floor(n/k);
        totalswords += trade;
        n = trade + (n%k);
    }
    cout << totalswords;
    return 0;
}