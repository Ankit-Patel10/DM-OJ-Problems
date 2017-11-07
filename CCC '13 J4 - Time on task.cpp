#include <bits/stdc++.h>

using namespace std;

int main() {
    int minutes, c;
    cin >> minutes;
    cin >> c;
    int choreminutes[c];
    
    for(int i = 0; i < c; i++) {
        cin >> choreminutes[i];
    }
    
    sort(choreminutes, choreminutes + c);
    int counter = 0;
    for(int i = 0; i < c; i++) {
        if ((minutes - choreminutes[i]) < 0) {
          cout << counter;
          return 0;
        }
        counter++;
        
        minutes -= choreminutes[i];
      
    }
    return 0;
}