#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n, m;
  cin >> n >> m;

  bool vis[m+1]={};

  for (int i = 1; i <= n; ++i) {
    int l, r;
    cin >> l >> r;
    for (int j = l; j <= r; ++j) {
      vis[j] = true;
    }

  }
  vector<int> ans;
  for (int j = 1; j <= m; ++j) {
    if (!vis[j]) ans.push_back(j);
  }
  cout << ans.size() << "\n";
  for (int j = 0; j < ans.size(); ++j) {
    cout << ans[j] << " ";
  }

}

int main() {
  Barcelona;
  int tc = 1;
//  cin >> tc;
  while (tc--) {
    Messi();
  }
}