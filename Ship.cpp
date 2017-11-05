#include <bits/stdc++.h>

using namespace std;

int main() {
    string k;
    getline(cin, k);
    int b = 0,f = 0,t = 0,l = 0,c = 0;
    
    for(int i = 0; i < k.length(); i++) {
        if(k.at(i) == 'B') {
            b++;
        }
        else if(k.at(i) == 'F') {
            f++;
        }
        else if(k.at(i) == 'T') {
            t++;
        }
        else if(k.at(i) == 'L') {
            l++;
        }
        else if(k.at(i) == 'C') {
            c++;
        }
    }
    
    if(b == 0) {
        cout << "B";   
    }
    if(f == 0) {
        cout << "F";
    }
    if(t == 0) {
        cout << "T";
    }
    if(l == 0) {
        cout << "L";
    }
    if(c == 0) {
        cout << "C";
    }
    if(c != 0 && b!= 0 && f != 0 && t!= 0 && l != 0) {
        cout << "NO MISSING PARTS";
    }
    return 0;
}