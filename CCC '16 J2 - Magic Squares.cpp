#include <bits/stdc++.h>

using namespace std;

int main() {
  int sum[8];
  for(int i = 0 ; i < 8; i++) {
    sum[i] = 0;
  }
  int array[4][4];
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 4; j++) {
      cin >> array[i][j];
      sum[i] += array[i][j];
      sum[i+4] += array[j][i];
    }
  }
  
}
