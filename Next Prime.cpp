#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n == 2) {
        return true;
    }
    else if (n == 1) {
        return false;
    } 
    else if(n%2 == 0 && n != 2) {
        return false;
    }
    int k = sqrt(n);
    for(int i = 3; i < k; i += 2) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
    
};

int main() {
    int num;
    cin >> num;
    if(isPrime(num) == true) {
        cout << num;
        return 0;
    } 
    for(int i = num; i <= 200000000000; i++) {
        if(isPrime(i) == true) {
            cout << i;
            return 0;
        }
    }
    return 0;
}