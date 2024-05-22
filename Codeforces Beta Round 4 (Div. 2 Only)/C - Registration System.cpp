#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n;
  cin >> n;

  map<string, int> mp;
  while (n--) {
    string s;
    cin >> s;
    if (!mp[s]) cout << "OK\n";
    else cout << s << mp[s] << "\n";
    mp[s]++;
  }
}


int main() {
  Barcelona;
  int tc = 1;
//  cin >> tc;
  while (tc--) {
    Messi();
  }
}