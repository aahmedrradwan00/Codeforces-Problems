#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n, m;
  cin >> n >> m;
  map<int, int> mp;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    mp[x] = i;
  }
  if (mp.size() < m) cout << "NO";

   else {
    cout << "YES\n";
    int c=0;
    for (auto [a, b]: mp) {
      cout << b << " ";
      c++;
      if(c==m) break;
    }
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