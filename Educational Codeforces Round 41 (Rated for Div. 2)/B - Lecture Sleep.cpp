#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
//const int MAX_VAL = 1e6 + 1;


void Messi() {
  int n, k;
  cin >> n >> k;
  ll ans = 0, sum = 0;
  int arr[n + 1] = {};
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  for (int i = 1; i <= n; ++i) {
    bool x;
    cin >> x;
    if (x) {
      sum += arr[i];
      arr[i] = 0;
    }
    arr[i] += arr[i - 1];
  }

  for (int i = 1; i + k - 1 <= n; ++i) {
    ll add = arr[i + k - 1] - arr[i - 1];
    ans = max(ans, sum + add);
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