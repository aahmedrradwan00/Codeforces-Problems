#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  ll n;
  cin >> n;
  vector<ll> v;
  for (int bt = 1; bt <= 10; ++bt) {
    for (int mask = 0; mask < (1 << bt); ++mask) {
      ll x = 0, sev = 0, fur = 0;
      for (int i = 0; i < bt; ++i) {
        x *= 10;
        if ((mask >> i) & 1) {
          sev++;
          x += 7;
        } else {
          fur++;
          x += 4;
        }
      }
      if (sev == fur) v.push_back(x);
    }
  }
  sort(v.begin(), v.end());
  cout << *lower_bound(v.begin(), v.end(), n);
  return 0;
}
