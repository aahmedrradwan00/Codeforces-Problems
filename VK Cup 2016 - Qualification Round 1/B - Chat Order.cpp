#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n;
  cin >> n;
  string arr[n];
  map<string, int> mp;

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = n - 1; i >= 0; --i) {
    if (mp[arr[i]]) continue;
    cout << arr[i] << endl;
    mp[arr[i]] = 1;

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