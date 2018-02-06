#include <bits/stdc++.h>
#include <iostream>

using namespace std;



int calcperm(int a) {
  int sum = 0;
  for(int first = 1; first <= a-3; first++) {
    for(int second = first + 1; second <= a-2; second++) {
      for(int third = second + 1; third<=a-1; third++) {
        sum++;
      }
    }
  }
  return sum;
}


int main() {
    int j;
    cin >> j;
    cout << calcperm(j) << endl;
    return 0;
}
