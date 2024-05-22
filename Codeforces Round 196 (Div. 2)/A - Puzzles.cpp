#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
  int n, m, ans = 1e9;
  cin >> n >> m;
  int arr[m];
  for (int i = 0; i < m; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + m);
  for (int i = 0; i < m-(n-1); i++) {
    int z = abs(arr[i] - arr[i + (n-1)]);
    ans = min(ans, z);
  }
  cout << ans;
  return 0;
}