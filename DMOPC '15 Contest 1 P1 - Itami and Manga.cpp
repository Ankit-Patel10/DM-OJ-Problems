#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string mangas[n];
    double ratings[n];
    double maxrating = 0;
    int index;
    for(int i = 0; i < n; i++) {
        cin >> mangas[i] >> ratings[i];
        if (ratings[i] > maxrating) {
            maxrating = ratings[i];
            index = i;
        }
    }
    cout << mangas[index];
    
    return 0;
}