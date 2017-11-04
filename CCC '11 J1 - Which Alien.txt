#include <bits/stdc++.h>

using namespace std;

int main() {
    int ant;
    int eyes;
    cin >> ant;
    cin >> eyes;
    //GraemeMercurian
    
    if(ant <= 2 && eyes <= 3) {
        cout << "GraemeMercurian\n";
    }
    if(ant <= 6 && eyes >= 2) {
        cout << "VladSaturnian\n";
    }
    if(ant >= 3 && eyes <= 4) {
        cout << "TroyMartian\n";
    }
    return 0;
}