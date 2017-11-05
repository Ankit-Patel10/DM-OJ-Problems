#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;
    
    double imarks[k];
    double isum = 0;
    for(int i = 0; i < k; i++) {
        cin >> imarks[i];
        isum += imarks[i];
    }
    
    int s;
    cin >> s;
    double smarks[s];
    double ssum = 0;
    double totalaverage;
    for(int i = 0; i < s; i++) {
        cin >> smarks[s];
        ssum += smarks[s];
        totalaverage = (isum + ssum) / (i + 1 + k);
        printf("%.3f\n", totalaverage);
        // cout << totalaverage << "\n";
    }
    return 0;
}