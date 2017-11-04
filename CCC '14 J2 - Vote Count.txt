#include <bits/stdc++.h>

using namespace std;

int main() {
    int v;
    cin >> v;
    int counta = 0;
    int countb = 0;
    for(int i = 0; i < v; i++) {
        char k;
        cin >> k;
        if(k == 'A') {
            counta++;
        }
        if(k == 'B') {
            countb++;
        }
    }
    if (counta > countb) {
        cout << "A";
    }
    else if(counta < countb) {
        cout << "B";
    }
    else {
        cout << "Tie";
    }
    return 0;
}