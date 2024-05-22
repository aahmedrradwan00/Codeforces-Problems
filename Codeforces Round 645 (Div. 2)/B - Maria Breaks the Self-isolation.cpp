#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int arr[n + 1];
    int ans = 0;
    for (int i = 1; i <= n; ++i) {
      cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);

    for (int i = 1; i <= n; ++i) {
      if (i >= arr[i]) {
        ans= i;
      }
    }
    cout << ans + 1 << "\n";
  }
  return 0;
}