#include <bits/stdc++.h>

using namespace std;

int altitude(int t, int h) {
    int altitude;
    altitude = (-6*(t*t*t*t) + h*t*t*t + 2*t*t + t);
    return altitude;
}

int main() {
    int h, m;
    cin >> h;
    cin >> m;
    if(altitude(m,h) > 0) {
        cout << "The balloon does not touch ground in the given time.";
        return 0;
    }
    for(int i = 1; i < m; i++) {
      if(altitude(i,h) <= 0) {
        cout << "The balloon first touches ground at hour:" << "\n" << i;
        return 0;
      }
    }
    return 0;
}