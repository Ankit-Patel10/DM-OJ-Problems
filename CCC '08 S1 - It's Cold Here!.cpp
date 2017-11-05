#include <bits/stdc++.h>

using namespace std;

int main() {
    string k[100000];
    int temp[100000];
    int lowesttemp;
    int index;
    for(int i = 0; i < 10001; i++) {
        cin >> k[i];
        if(k[i] == "Waterloo") {
            break;
        }
        cin >> temp[i];
        if(temp[i] < lowesttemp) {
            lowesttemp = temp[i];
            index = i;
        }
        
    }
    cout << k[index];
    return 0;
}