#include <bits/stdc++.h>

using namespace std;

int main() {
    int angle1,angle2,angle3;
    cin >> angle1;
    cin >> angle2;
    cin >> angle3;
    int sum = angle1 + angle2 + angle3;
    if (sum != 180) {
        cout << "Error";
        return 0;
    }
    else if (angle1 == 60 && angle2 == 60){
        cout << "Equilateral";
    }
    else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3) {
        cout << "Isosceles";
    }
    else {
        cout << "Scalene";
    }
    return 0;
}