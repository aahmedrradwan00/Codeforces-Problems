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
    vector<int> v;
    int sum = 0;
    if (n > 45) {
      cout << -1;
    } 
    else {
      for (int i = 9; i >= 1; --i) {
        sum += i;
        if (sum < n) v.push_back(i);
        else if (sum == n) {
          v.push_back(i);
          break;
        } else sum -= i;
      }
      sort(v.begin(), v.end());
      for (auto it: v) cout << it;
    }
    cout << "\n";
  }
  return 0;
}