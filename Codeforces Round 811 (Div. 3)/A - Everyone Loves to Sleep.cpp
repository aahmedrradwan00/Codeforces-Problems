#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int tc;
  cin >> tc;
  while (tc--) {
    int n, h, m;
    cin >> n >> h >> m;
    int sleep = 60 * h + m;
    int ans = 1e9;

    for (int i = 0; i < n; ++i) {
      int h1, m1;
      cin >> h1 >> m1;
      int t = 60 * h1 + m1 - sleep;
      if (t < 0)t += 24 * 60;
      ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << "\n";
  }
  return 0;
}