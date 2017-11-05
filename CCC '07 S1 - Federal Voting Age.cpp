#include <bits/stdc++.h>

using namespace std;

int canVote(int a, int b, int c) {
  if(2007 - a > 18) {
            cout << "Yes\n";
            return 0;
        }
        else if(2007 - a <= 17) {
            cout << "No\n";
            return 0;
        }
        else if(b > 2) {
            cout << "No\n";
            return 0;
        }
        else if(b == 1) {
            cout << "Yes\n";
            return 0;
        }
        else if(c > 27) {
            cout << "No\n";
            return 0;
        }
        else if(c <= 27) {
            cout << "Yes\n";
            return 0;
        }
}

int main() {
    int n;
    cin >> n;
    
    int year[n];
    int month[n];
    int day[n];
    for(int i = 0; i < n; i++) {
        cin >> year[i] >> month[i] >> day[i];
        canVote(year[i], month[i], day[i]);
    }
    
    return 0;
}