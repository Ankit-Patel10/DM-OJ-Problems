#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int x = n;
  int y = 0;
  while(x > 5) {
    x--;
    y++;
  }
  while(x <= 5 && y <= 5 && x >= y) {
    sum++;
    x--;
    y++;
  }
  cout << sum << endl;
}
