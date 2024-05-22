#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define long long ll
const int MAX_INT = 10005;

int main() {
  Barcelona
  int s, n;
  cin >> s >> n;
  pair<int, int> pr[n];
  for (int i = 0; i < n; ++i) {
    cin >> pr[i].first >> pr[i].second;
  }

  sort(pr, pr + n);

  for (int i = 0; i < n; ++i) {

    if (s <= pr[i].first) {
      cout << "NO\n";
      return 0;
    } else s += pr[i].second;
  }

  cout << "YES\n";
  return 0;
}


