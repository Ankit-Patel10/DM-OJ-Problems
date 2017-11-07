#include <bits/stdc++.h>

using namespace std;



int main() {
  int t1,t2;
  cin >> t1;
  cin >> t2;
  int counter = 1;
  int temp;
  while(t2 >= 0) {
    temp = t1;
    t1 = t2;
    t2 = temp-t2;
    counter++;
  }
  cout << counter;
  return 0;
  
}