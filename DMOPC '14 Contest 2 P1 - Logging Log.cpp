#include <bits/stdc++.h>

using namespace std;

int main() {
    int days;
    cin >> days;
    int trees[days];
    for(int i = 0; i < days; i++) {
        int masssum = 0;
        cin >> trees[i];
        for(int j = 0; j < trees[i]; j++) {
            int k;
            cin >> k;
            masssum += k;
        }
        if(trees[i] == 0) {
          cout << "Weekend";
        }
        else {
        cout << "Day " << i+1 << ": " << masssum << "\n";
}
}
return 0;
}