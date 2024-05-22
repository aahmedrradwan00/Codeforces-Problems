#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  vector<char> v;
  for (int i = 0; i < s.size(); ++i) {
    if (v.empty() || s[i] != v.back()) v.push_back(s[i]);
    else v.pop_back();
  }
  cout << (v.empty() ? "YES" : "NO");
}
