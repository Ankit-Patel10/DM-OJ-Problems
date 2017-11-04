#include <bits/stdc++.h>

using namespace std;

int main() {
    int square[4][4];
    int sum2;
    for(int i = 0; i < 4; i++) {
        sum2 = 0;
        for(int j =0; j <4; j++) {
            cin >> square[i][j];
            sum2 += square[i][j];
        }
        if (sum2 != (square[0][0] + square[0][1] + square[0][2] + square[0][3])) {
            cout << "not magic";
            return 0;
        }
    }
    sum2 = 0;
    int sum = square[0][0] + square[0][1] + square[0][2] + square[0][3];
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            sum2 += square[j][i];
        }
        if (sum2 != sum) {
            cout << "not magic";
            return 0;
        }
        sum2 = 0;
    }
    cout << "magic";
    return 0;
}