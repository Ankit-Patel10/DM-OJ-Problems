#include <bits/stdc++.h>

using namespace std;

string min(int a, int e, int i, int o, int u) {
  if(a <= e && a <= i && a <= o && a <= u) return "a";
  if(e <= a && e <= i && e <= o && e <= u) return "e";
  if(i <= a && i <= e && i <= o && i <= u) return "i";
  if(o <= a && o <= e && o <= i && o <= u) return "o";
  if(u <= a && u <= e && u <= i && u <= o) return "u";
}

string nextConsonant(string s, int i, unordered_map<char,int> placement) {
  unordered_map<int,char> Consonant;
  Consonant[1] = 'a';
  Consonant[2] = 'b';
  Consonant[3] = 'c';
  Consonant[4] = 'd';
  Consonant[5] = 'e';
  Consonant[6] = 'f';
  Consonant[7] = 'g';
  Consonant[8] = 'h';
  Consonant[9] = 'i';
  Consonant[10] = 'j';
  Consonant[11] = 'k';
  Consonant[12] = 'l';
  Consonant[13] = 'm';
  Consonant[14] = 'n';
  Consonant[15] = 'o';
  Consonant[16] = 'p';
  Consonant[17] = 'q';
  Consonant[18] = 'r';
  Consonant[19] = 's';
  Consonant[20] = 't';
  Consonant[21] = 'u';
  Consonant[22] = 'v';
  Consonant[23] = 'w';
  Consonant[24] = 'x';
  Consonant[25] = 'y';
  Consonant[26] = 'z';

  char k = s[i];
  if(k == 'z') return "z";
  int location = placement[k];
  for(int i = location+1; i < 27; i++) {
    if (Consonant[i] != 'a' && Consonant[i] != 'e' && Consonant[i] != 'i' && Consonant[i] != 'o' && Consonant[i] != 'u') {
      string temp;
      temp[0] = Consonant[i];
      return temp;
    }
  }
}

int main() {
  unordered_map<char,int> placement;
  placement['a'] = 1;
  placement['b'] = 2;
  placement['c'] = 3;
  placement['d'] = 4;
  placement['e'] = 5;
  placement['f'] = 6;
  placement['g'] = 7;
  placement['h'] = 8;
  placement['i'] = 9;
  placement['j'] = 10;
  placement['k'] = 11;
  placement['l'] = 12;
  placement['m'] = 13;
  placement['n'] = 14;
  placement['o'] = 15;
  placement['p'] = 16;
  placement['q'] = 17;
  placement['r'] = 18;
  placement['s'] = 19;
  placement['t'] = 20;
  placement['u'] = 21;
  placement['v'] = 22;
  placement['w'] = 23;
  placement['x'] = 24;
  placement['y'] = 25;
  placement['z'] = 26;

  string s;
  cin >> s;
  int diffa, diffe, diffi, diffo, diffu;

  for(int i = 0; i < s.length(); i++) {
    if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
      diffa = abs(placement[s[i]] - placement['a']);
      diffe = abs(placement[s[i]] - placement['e']);
      diffi = abs(placement[s[i]] - placement['i']);
      diffo = abs(placement[s[i]] - placement['o']);
      diffu = abs(placement[s[i]] - placement['u']);
      s.insert(i+1,min(diffa,diffe,diffi,diffo,diffu));
      s.insert(i+2, nextConsonant(s, i, placement));
    }
  }
  cout << s << endl;

}
