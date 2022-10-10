#include <bits/stdc++.h>

using namespace std;

int main() {
  string k;
  while(cin >> k) {
    if(k == "quit!") return 0;
    if(k.length() <= 4) cout << k << endl;
    else {
      for(int i = k.length()-2; i < k.length()-1; i++) {
      if(k[i-1] != 'a' && k[i-1] != 'e' && k[i-1] != 'i' && k[i-1] != 'o' && k[i-1] != 'u' && k[i-1] != 'y' && k[i] == 'o' && k[i+1] == 'r') {
        k.insert(i+1, "u");
      }
    }
    cout <<k<< endl;

  }
  }
}
