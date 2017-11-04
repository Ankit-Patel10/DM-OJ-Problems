#include <bits/stdc++.h>

using namespace std;

int main() {
    int counthappy = 0, countsad = 0;
    string line;
    getline(cin, line);
    for(int i = 0; i < (line.length()-2); i++) {
        if(line.at(i) == ':' && line.at(i+1) == '-' && line.at(i+2) == ')') {
            counthappy++;
        }
        if(line.at(i) == ':' && line.at(i+1) == '-' && line.at(i+2) == '(') {
            countsad++;
        }
    }
    if(counthappy > countsad) {
        cout << "happy";
    }
    else if(countsad > counthappy) {
        cout << "sad";
    }
    else if(counthappy == 0 && countsad == 0) {
        cout << "none";
    }
    else {
        cout << "unsure";
    }
    return 0;
}