#include <bits/stdc++.h>

using namespace std;

int main() {
    double weight, height;
    cin >> weight;
    cin >> height;
    double b;
    b = weight/(height*height);
    if(b < 18.5 && b > 0) {
        cout << "Underweight";
    }
    else if(b>25) {
        cout << "Overweight";
    }
    else {
        cout << "Normal weight";
    }
    return 0;
}