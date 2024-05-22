#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define long long ll
const int MAX_INT = 10005;

int main() {
  Barcelona
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x == 1) {
      cout << "-1";
      return 0;
    }
  }
  cout << "1";
  return 0;
}


