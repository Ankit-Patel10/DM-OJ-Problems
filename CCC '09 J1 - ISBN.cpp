#include <bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    int sum;
    sum = 91 + num1 + (num2*3) + num3;
    cout << "The 1-3-sum is " << sum;
    return 0;
}