#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int n, m;
  cin >> n >> m;
  int ans = min(m, n);
  if (ans % 2 == 0) cout << "Malvika";
  else cout << "Akshat";
  return 0;
}