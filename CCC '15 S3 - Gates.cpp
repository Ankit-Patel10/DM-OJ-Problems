#include <bits/stdc++.h>

using namespace std;

int main() {
  int numOfGates, numOfPlanes;
  cin >> numOfGates;
  cin >> numOfPlanes;
  int Gates[numOfGates];
  int planes[numOfPlanes];
  for(int i = 0; i < numOfGates; i++) {
    Gates[i] = 0;
  }
  Gates[0] = -1;
  for(int i = 0; i < numOfPlanes; i++) {
    cin >> planes[i];
    int k = planes[i];
    while(k != 0){
      if(Gates[k] == 0) {
        Gates[k] = 1;
        k = 0;
      }
      else {
        k--;
      }
    }
  }
  int sum = 0;
  for(int i = 0; i < numOfGates; i++) {
    if(Gates[i] == 1) sum++;
  }
  cout << sum << endl;
}
