#include <bits/stdc++.h>

using namespace std;

int main() {
    int rounds;
    cin >> rounds;
    
    int davidpoints = 100;
    int antoniapoints = 100;
    
    
    for(int i = 0; i < rounds; i++) {
        //X is Antonia
        //Y is David
        int x = 0;
        int y = 0;
        cin >> x;
        cin >> y;
        if(x > y) {
            davidpoints -= x;
        }
        else if(y > x) {
            antoniapoints -= y;
        }
    }
    cout << antoniapoints;
    cout << "\n";
    cout << davidpoints;
    return 0;
}