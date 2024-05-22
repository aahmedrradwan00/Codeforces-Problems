#include <bits/stdc++.h>

using namespace std;

int main() {

  string K = "qwertyuiopasdfghjkl;zxcvbnm,./";
  map<char, int> mp;
  for (int i = 0; i < K.size(); ++i) {
    mp[K[i]] = i;
  }
  char c;
  cin >> c;
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); ++i) {
    if (c == 'R') cout << K[mp[s[i]] - 1];
    else if (c == 'L') cout << K[mp[s[i]] + 1];
  }
}