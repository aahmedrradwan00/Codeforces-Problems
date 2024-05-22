#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int tc;
  cin >> tc;
  while (tc--) {
    string s;
    cin >> s;
    bool res = true;
    set<char> st;
    for (int i = 0; i < s.size(); ++i) {
      st.insert(s[i]);
    }
    if (st.size() < 2) res = false;

    cout << (res ? "YES" : "NO");
    cout << "\n";
    if (res) {
      string r = s;
      reverse(r.begin(), r.end());
      if (s==r){
      sort(r.begin(), r.end());
      }
      cout << r;
      cout << "\n";
    }}
  return 0;
}