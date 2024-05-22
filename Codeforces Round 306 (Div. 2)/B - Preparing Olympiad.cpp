#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int n, l, r, x;
  cin >> n >> l >> r >> x;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  int ans = 0;
  for (int mask = 0; mask < (1 << n); ++mask) {
    int sum = 0, mn = 1e9, mx = 0, count = 0;
    for (int i = 0; i < n; ++i) {
      if ((mask >> i) & 1) {
        count++;
        sum += arr[i];
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);
      }
    }
    if (count >= 2 && sum >= l && sum <= r && mx - mn >= x) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}