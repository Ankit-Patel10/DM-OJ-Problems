#include <bits/stdc++.h>

using namespace std;

int main() {
    char wins[6];
    int winsx = 0;
    for(int i = 0; i < 6; i++) {
        cin >> wins[i];
        if (wins[i] == 'W') {
            winsx++;
        }
    }
    if(winsx >= 5) {
        cout << "1";
    }
    else if(winsx == 3 || winsx == 4) {
        cout << "2";
    }
    else if(winsx == 1 || winsx == 2) {
        cout << "3";
    }
    else {
        cout << "-1";
    }
    return 0;
}