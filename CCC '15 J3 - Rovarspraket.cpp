#include <bits/stdc++.h>

using namespace std;

string min(int a, int e, int i, int o, int u) {
  if(a <= e && a <= i && a <= o && a <= u) return "a";
  if(e <= a && e <= i && e <= o && e <= u) return "e";
  if(e <= a && e <= i && e <= o && e <= u) return "i";
  if(e <= a && e <= i && e <= o && e <= u) return "o";
  if(e <= a && e <= i && e <= o && e <= u) return "u";
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
      s.insert(i+1,"")
    }
  }

}
