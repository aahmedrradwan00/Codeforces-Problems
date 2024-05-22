#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()

ll f(ll n) {

  ll ret = 1;
  while (n) {
    ll ld = n % 10;
    n /= 10;
    if (ld != 0) ret *= ld;
  }
  return ret;
}

ll g(ll n) {

  if (n < 10) return n;
  return g(f(n));
}


vector<int> v[10];

void Messi() {
  for (int i = 1; i <= 1e6; ++i) {
    ll gg = g(i);
    if (gg <= 9) v[gg].push_back(i);
  }
  int n;
  cin >> n;
  while (n--) {

    int l, r, x;
    cin >> l >> r >> x;

    cout << upper_bound(all(v[x]), r) - lower_bound(all(v[x]), l)<<"\n";

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