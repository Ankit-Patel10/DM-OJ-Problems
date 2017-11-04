#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    cin >> n; 
    int sum1 = 0;
    int massoftrees[n];
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        sum1 += k;
        massoftrees[i] = sum1; // 1,2,3,4,5
    }
    int numofQ; // 0
    cin >> numofQ; // 3
    for(int i = 0; i < numofQ; i++) {
        int k,l;
        cin >> k >> l;
        int sum = 0;
        sum = (massoftrees[l] - massoftrees[k-1]);
        cout << sum << "\n";
    }
    
    return 0;
}