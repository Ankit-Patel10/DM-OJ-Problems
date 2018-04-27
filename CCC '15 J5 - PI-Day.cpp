#include <bits/stdc++.h>

using namespace std;

int main() {
  int numOfPies;
  cin >> numofPies;

  int numOfPeople;
  cin >> numOfPeople;

  if(numOfPeople == numOfPies) {
    cout << "1" << endl;
    return 0;
  }
  if(numOfPeople == 1) {
    cout << "1" << endl;
    return 0;
  }

  int pies[numOfPeople+1];
  pies[0] = 0;
  int currentPies = numOfPies;
  for(int i = 0; i < numOfPeople; i++) {
    pies[i] = 0;
  }
  pies[numOfPeople] = numOfPies;

  int numOfWays = 0;
  numOfWays++;


  while(pies[i] != )
      if(pies[i] > (pies[j]+1)) {
        pies[i]--;
        pies[i-1]++;
        numOfWays++;
      }

  }
