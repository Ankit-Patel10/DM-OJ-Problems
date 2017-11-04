#include <bits/stdc++.h>

using namespace std;

int main() {
    int currentposition = 1;
    while (currentposition != 100) {
        int roll = 0;
        cin >> roll;
        if (roll == 0) {
            cout << "You Quit!";
            return 0;
        }
        currentposition += roll;
        // ladders
        if(currentposition == 9) {
            currentposition = 34;
        }
        else if (currentposition == 40) {
            currentposition = 64;
        }
        else if (currentposition == 67) {
            currentposition = 86;
        }
        else if (currentposition == 54) {
            currentposition = 19;
        }
        else if (currentposition == 90) {
            currentposition = 48;
        }
        else if (currentposition == 99) {
            currentposition = 77;
        }
        else if (currentposition == 100) {
            cout << "You are now on square 100\n";
            cout << "You Win!";
            return 0;
        }
        if (currentposition > 100) {
            currentposition -= roll;
        }
        cout << "You are now on square " << currentposition << "\n";
        
    }
    return 0;
}