#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    int sum = 0;
    if(k == 0) {
      sum += n;
    }
    else {
    for(int i = 0; i < k; i++) {
        if (i == 0) sum += n;
        sum += n*10;
        n *= 10;
    }
    }
    cout << sum;
    return 0;
}