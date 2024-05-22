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
    cin>>n;
    ll  b[n];
    ll sA=0,sB=0;
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
      ll x;
      cin >> x;
      sA+=x;
    }
    for (int i = 0; i < n; ++i) {
      cin >> b[i];
      sB+=b[i];
    }
    sort(b,b+n);
    ans =sA+sB-b[n-1];
    cout << ans << "\n";
  }
  return 0;
}