#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  string values[n][2];
  for(int i = 0; i < n; i++) {
    cin >> values[i][0];
    cin >> values[i][1];
    vector<char> first;
    vector<char> second;
    for(int j = 0; j < (values[i][0]).length(); j++) {
      first.push_back((values[i][0])[j]);
    }
    for(int j = 0; j < (values[i][1]).length(); j++) {
      second.push_back((values[i][1])[j]);
    }
    while(first.size() < second.size()) {
      first.push_back('0');
      
    }
  }

}
