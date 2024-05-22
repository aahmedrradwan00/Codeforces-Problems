#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  string s;
  getline(cin, s);
  map<char, int> mp;
  for (auto it: s) {
    if (it != ' ') mp[it]++;
  }
  getline(cin, s);
  for (auto it: s) {
    if (it != ' ') mp[it]--;
  }
  string ans = "YES";
  for (auto [a, b]: mp) {
    if (b < 0) {
      ans = "NO";
    }
  }
  cout << ans;
}

int main() {
  Barcelona;
  int tc = 1;
//  cin >> tc;
  while (tc--) {
    Messi();
  }
}