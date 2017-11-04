#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string k;
    string status = "YES";
    getline(cin, k);
    for(int i = 0; i < k.length(); i++) {
        if(k.at(i) != 'I' && k.at(i) != 'O' && k.at(i) != 'S' && k.at(i) != 'H' && k.at(i) != 'Z' && k.at(i) != 'X' && k.at(i) != 'N') {
            status = "NO";
        }
    }
    cout << status;
    
    return 0;
}