#include <bits/stdc++.h>

using namespace std;

int main() {
    int additions;
    cin >> additions;
    int sums[additions];
    for(int i = 0; i < additions; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        sums[i] = (a1 + a2);
    }
    for(int i = 0; i < additions; i++) {
        cout << sums[i];
        cout << "\n";
    }
    return 0;
}
