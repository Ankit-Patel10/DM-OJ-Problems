#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k ,d;
    cin >> n;
    cin >> k;
    cin >> d;
    
    for(int i = 0; i < d; i++) {
        n *= k;
    }
    cout << n;
    return 0; 
}