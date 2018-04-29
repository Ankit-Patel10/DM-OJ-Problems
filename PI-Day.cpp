#include <bits/stdc++.h>

using namespace std;

int sum(int a[], int n) {
  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += a[i];
  }
  return sum;
}

void printArray(int a[], int n) {
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int numOfPies;
  cin >> numOfPies;

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

  int pies[numOfPeople];
  for(int i = 0; i < numOfPeople-1; i++) {
    pies[i] = 1;
  }
  pies[numOfPeople-1] = numOfPies-(numOfPeople-1);
  int numofWays = 1;
  printArray(pies, numOfPeople);
    for(int i = numOfPeople-1; i > 0; i--) {
      while(pies[i] > (pies[i-1]+1)) {
        pies[i]--;
        pies[i-1]++;
        numofWays++;
        printArray(pies, numOfPeople);
      }
    }

    cout << endl << "LOOK HERE" << endl;
  for(int i = numOfPeople-1; i > 0; i--) {
    for(int j = i-1; j >= 0; j--) {
      if((pies[i] > (pies[j]+1)) && pies[i]-1 >= pies[i-1]) {
        pies[i]--;
        pies[j]++;
        numofWays++;
        printArray(pies, numOfPeople);
      }
    }
  }
  cout << numofWays << endl;
  }
