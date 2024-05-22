#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  string s;
  cin >> s;
  vector<char> v;
  int arr[6] = {'A', 'O', 'Y', 'E', 'U', 'I'};
  for (int i = 0; i < s.size(); ++i) {
    bool res = true;
    for (int j = 0; j < 6; ++j) {
      if (s[i] == arr[j] || s[i] == tolower(arr[j])) res = false;
    }
    if (res) v.push_back(towlower(s[i]));
  }
  for (int i = 0; i < v.size(); ++i) {
    cout << '.' << v[i];
  }
  return 0;
}