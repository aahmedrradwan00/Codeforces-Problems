#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {

  int n;
  cin >> n;
  int arr[n + 1], idx[n + 1];
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
    idx[arr[i]] = i;
  }
  bool vis[n + 1] = {};

  for (int i = n; i >= 1; i--) {
    if (vis[i]) continue;
    for (int j = idx[i]; j <= n; ++j) {
      if (vis[arr[j]]) break;
      cout << arr[j] << " ";
      vis[arr[j]] = 1;

    }
  }
  cout << '\n';
}


int main() {
  Barcelona;
  int tc = 1;
  cin >> tc;
  while (tc--) {
    Messi();
  }
}