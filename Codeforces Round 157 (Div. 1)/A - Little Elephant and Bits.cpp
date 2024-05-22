#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  string s;
  cin >> s;
  bool zero = false;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '0') {
      s.erase(i, 1);
      zero = true;
      break;
    }
  }
  if (zero) cout << s;
  else s.erase(0, 1), cout << s;
  return 0;
}