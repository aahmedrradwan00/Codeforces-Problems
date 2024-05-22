#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

bool comp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
  int n;
  cin >> n;
  pair<int, int> pr[n];

  for (int i = 0; i < n; ++i) {
    cin >> pr[i].first >> pr[i].second;
  }
  sort(pr, pr + n, comp);

  int ans = 0, last = 0;
  for (int i = 0; i < n; ++i) {
    if (pr[i].first > last) {
      last = pr[i].second;
      ans++;
    }
  }
  cout << ans;
  return 0;
}