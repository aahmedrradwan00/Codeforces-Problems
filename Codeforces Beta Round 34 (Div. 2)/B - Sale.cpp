#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  for (int i = 0; i < m; ++i) {
    if (arr[i] < 0) ans -= arr[i];
  }
  cout << ans;
  return 0;
}

