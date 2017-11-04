#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    int scount = 0;
    int tcount = 0;
    string text[n];
    for(int i = 0; i < n; i++) {
        getline(cin, text[i]);
        if (text[i].length() > 100) {
            return 0;
        }
        for(int j = 0; j < text[i].length(); j++) {
            if(text[i].at(j) == 's' || text[i].at(j) == 'S') {
                scount++;
            }
            else if (text[i].at(j) == 't' || text[i].at(j) == 'T') {
                tcount++;
            }
        }
    }
    if (tcount > scount) {
        cout << "English";
    }
    else {
        cout << "French";
    }
    return 0;
}