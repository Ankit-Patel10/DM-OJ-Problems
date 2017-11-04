#include <bits/stdc++.h>

using namespace std;

bool isRsaNumber(int a) {
    int k = sqrt(a);
    double l = a;
    int divisors = 0;
    if(l/k == k) {
            divisors += 1;
        }
    for(int i = 1; i <= k; i++) {
        if (a%i == 0) {
            divisors += 2;
        }
        if (divisors > 4) {
            return false;
        }
    }
    if(divisors == 4) {
    return true;
    }
    else {
      return false;
    }
}


int main() {
    int lowerbound, upperbound;
    cin >> lowerbound;
    cin >> upperbound;
    int rsanums = 0;
    for(int i = lowerbound; i <= upperbound; i++) {
        if(isRsaNumber(i) == true) {
            rsanums++;
        }
    }
    cout << "The number of RSA numbers between " << lowerbound << " and " << upperbound << " is " << rsanums;
    return 0; 
}