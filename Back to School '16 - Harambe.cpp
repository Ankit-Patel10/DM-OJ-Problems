#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    string k;
    getline(cin, k);
    int uppercase = 0;
    int lowercase = 0;
    for(int i = 0; i < k.length(); i++) {
        if(k.at(i) >= 65 && k.at(i) <= 90) {
            uppercase++;
        }
        else if(k.at(i) >= 97 && k.at(i) <= 122) {
            lowercase++;
        }
    }
    if(uppercase>lowercase) {
        for(int i = 0; i < k.length(); i++) {
            if(k.at(i) >= 97 && k.at(i) <= 122) {
            k.at(i) -= 32;
        }
        }
    }
        
    else if(uppercase<lowercase) {
        for(int i = 0; i < k.length(); i++) {
            if(k.at(i) >= 65 && k.at(i) <= 90) {
            k.at(i) += 32;
        }
        }
    }
    else {
    
        cout << k;
        return 0;
    }
    cout << k;
    
    return 0;
}
