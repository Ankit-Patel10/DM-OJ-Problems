#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int briefcasesopened[n];
    int briefcasestatus[10] = {1,1,1,1,1,1,1,1,1,1};
    for(int i = 0; i < n; i++) {
      int k;
      cin >> k;
      briefcasestatus[k-1] = 0;
    }
    int bankersoffer;
    int counter = 0;
    int sum = 0;
    cin >> bankersoffer;
    if(briefcasestatus[0] == 1) {
        sum += 100;
        counter++;
    }
    if(briefcasestatus[1] == 1) {
        sum += 500;
        counter++;
    }
    if(briefcasestatus[2] == 1) {
        sum += 1000;
        counter++;
    }
    if(briefcasestatus[3] == 1) {
        sum += 5000;
        counter++;
    }
    if(briefcasestatus[4] == 1) {
        sum += 10000;
        counter++;
    }
    if(briefcasestatus[5] == 1) {
        sum += 25000;
        counter++;
    }
    if(briefcasestatus[6] == 1) {
        sum += 50000;
        counter++;
    }
    if(briefcasestatus[7] == 1) {
        sum += 100000;
        counter++;
    }
    if(briefcasestatus[8] == 1) {
        sum += 500000;
        counter++;
    }
    if(briefcasestatus[9] == 1) {
        sum += 1000000;
        counter++;
    }
    
    if(bankersoffer > (sum/counter)) {
        cout << "deal";
    }
    else {
        cout << "no deal";
    }
    return 0;
}