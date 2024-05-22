#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int tc;
  cin >> tc;
  while (tc--) {
    int n, ans = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      ans &= x;
    }
    cout << ans<<"\n";
  }
  return 0;
}