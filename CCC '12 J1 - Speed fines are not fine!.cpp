#include <bits/stdc++.h>

using namespace std;

int main() {
    int speed;
    int speedlimit;
    cin >> speedlimit;
    cin >> speed;
    string m = "You are speeding and your fine is $";
    if (speed <= speedlimit) {
        cout << "Congratulations, you are within the speed limit!";
    }
    else if(speed > speedlimit && speed <= (speedlimit+20)) {
        cout << m << "100.";
    }
    else if(speed > (speedlimit+20) && speed <= (speedlimit+30)) {
        cout << m << "270.";
    }
    else if (speed >= (speedlimit+31)) {
        cout << m << "500.";
    }
    return 0;
}