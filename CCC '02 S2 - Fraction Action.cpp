#include <bits/stdc++.h>



int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int k;
    if(a>b) {
        k = a/b; //Mixed integer
        a -= k*b;
    }
    if (a == 0) {
        cout << k;
        return 0;
    }
    int temp1 = a;
    int temp2 = b;
    int r;
    while (b != 0)
    {
        r = b;
        b = a % b;
        a = r;
    }
    temp1 /= a;
    temp2 /= a;

    if (k == 0) {
    cout << temp1 << "/" << temp2;
    return 0;
    }
    cout << k << " " << temp1 << "/" << temp2;
    return 0;
}
