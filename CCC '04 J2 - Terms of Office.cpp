#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;
    
    int range = y-x;
    int numofchanges = floor(range/60) + 1;
    int changes[numofchanges];
    for(int i = 0; i < numofchanges; i++) {
        changes[i] = x + 60*i;
        cout << "All positions change in year " << changes[i] << "\n";
    }
    return 0;
}