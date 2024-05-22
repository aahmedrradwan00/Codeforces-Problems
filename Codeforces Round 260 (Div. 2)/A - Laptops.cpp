#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define long long ll
const int MAX_INT = 10005;

int main() {
  Barcelona
  int n;
  cin >> n;
  pair<int, int> pr[n];
  for (int i = 0; i < n; ++i) {
    cin >> pr[i].first >> pr[i].second;
    if (pr[i].first > pr[i].second) {
      cout << "Happy Alex";
      return 0;
    }
  }
  cout << "Poor Alex";
  return 0;
}


