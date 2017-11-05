#include <bits/stdc++.h>
#include <math.h>
#define _USE_MATH_DEFINES

using namespace std;

int main() {
    int r, h;
    cin >> r;
    cin >> h;
    double volume;
    volume = (M_PI*r*r*h)/3;
    printf("%.2f", volume);
    return 0;
}