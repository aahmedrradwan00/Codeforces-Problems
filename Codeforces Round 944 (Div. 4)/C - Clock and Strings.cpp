#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b) swap(a, b);
    if ((c >= a && c <= b) ^ (d >= a && d <= b)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}