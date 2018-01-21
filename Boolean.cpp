#include <bits/stdc++.h>

using namespace std;

int main() {
    string k;
    getline(cin,k);
    if(k.length() % 8 == 0) {
        cout << "False";
        return 0;
    }
    else if(k.length() % 4 == 0) {
        cout << "True";
        return 0;
    }
    else if(k.length() % 8 == 1) {
        cout << "True";
        return 0;
    }
    else if(k.length() % 4 == 1){
       cout << "False";
    }
    return 0;
}
