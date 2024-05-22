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
    if ((n & 1)) {
      for (int i = 0; i < n; ++i) cout << 1 << " ";
    } else {
      cout << 1 << " " << 3 << " ";
      for (int i = 0; i < n - 2; ++i) cout << 2 << " ";
    }
    cout << "\n";

  }
  return 0;
}