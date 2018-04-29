#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string k;
  for(int i = 0; i < n; i++) {
    int ways = 0;
    cin >> k;
    unordered_map<string,int> values;
    for(int j = 0; j < k.length(); j++) {
      for(int l = 0; l <= j; l++) {
        if(values.find(k.substr(l,j+1)) == values.end()) {
          values[k.substr(l,j+1)] = 1;
          ways++;
        }
      }
    }
    ways++;
    cout << k;
    cout << ways << endl;
  }
}
