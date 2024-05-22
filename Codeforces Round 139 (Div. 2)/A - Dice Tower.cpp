#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int top;
  cin >> top;
  bool count = true;
  for (int i = 0; i < n; ++i) {
    int x, y;
    cin >> x >> y;
    if (x + y == 7 || x == top || x == (7 - top) || y == top || y == (7 - top)) count = false;
  }
  if (count) cout << "YES";
  else cout << "NO";
}