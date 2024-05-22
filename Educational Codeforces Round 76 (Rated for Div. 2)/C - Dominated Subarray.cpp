#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    int arr[n];
    vector<int> idx[n + 1];
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
      idx[arr[i]].push_back(i);
    }
    int ans =1e9;
    for (int i = 1; i <= n; ++i) {
      if (idx[i].size() <= 1) {
        continue;
      }
      for (int j = 1; j < idx[i].size(); ++j) {
        ans = min(ans, idx[i][j] - idx[i][j-1]+1);
      }
    }
    if (ans == 1e9) ans = -1;
    cout << ans << "\n";
  }
  return 0;
}
