#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int powerlevels[n];
    for(int k = 0; k < n; k++) {
        cin >> powerlevels[k];
        if(powerlevels[0] <= powerlevels[k] && k!= 0) {
        cout << "NO";
        return 0;
        }
    }
    cout << "YES";
    return 0;
}