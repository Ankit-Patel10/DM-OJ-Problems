#include <bits/stdc++.h>

using namespace std;

int main() {
    int i1, i2, i3, i4;
    cin >> i1;
    cin >> i2;
    cin >> i3;
    cin >> i4;
    if(i1 == i2 && i1 == i3 && i1 == i4) {
        cout << "Fish At Constant Depth";
    }
    else if (i1 > i2 && i2 > i3 && i3 > i4) {
        cout << "Fish Diving";
    }
    else if (i1 < i2 && i2 < i3 && i3 < i4) {
        cout << "Fish Rising";
    }
    else {
        cout << "No Fish";
    }
    return 0;
}