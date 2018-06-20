#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string word) {
  for(int i = 0; i < word.length(); i++) {
    if(word[i] != word[word.length()-1-i]) return false;
  }
  return true;
}

int main() {
  string k;
  int maxlength = 0;
  cin >> k;
  int lengthofInput = k.length();
  for(int i = 0; i < lengthofInput; i++) {
    for(int j = 0; j < lengthofInput - i; j++) {
      string substring = k.substr(i,lengthofInput-j-i);
      cout << substring << endl;
      if(substring.length() > maxlength) {
        if(isPalindrome(substring)) maxlength = substring.length();
      }
    }
  }
  cout << maxlength << endl;
  return 0;
}


// think
//

// t
// th
// thi
// thin
// think

// h
// hi
// hin
// hink

// i
// in
// ink

// n
// nk

// k
