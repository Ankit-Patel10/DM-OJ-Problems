#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string k;
    getline(cin, k);
    if(k.at(0) == '4' && (k.at(1) == '4' || k.at(1) == '3' || k.at(1) == '1') && (k.at(2) == '6' || k.at(2) == '7')) {
    if(k.length() != 11 || k.at(3) != 32) {
        cout << "invalid";
        return 0;
    }
    if(k.at(0) == '4' && k.at(1) == '1' && k.at(2) == '6') {
        cout << "valuable";
        return 0;
    }
    else {
        cout << "valueless";
        return 0;
    }
    }
    cout << "invalid";
    return 0;
}
