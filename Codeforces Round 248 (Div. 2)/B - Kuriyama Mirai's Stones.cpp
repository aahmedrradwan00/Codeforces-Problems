#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
//const int MAX_VAL = 1e6 + 1;


void Messi() {
  int n;
  cin >> n;
  ll arr[n + 1], pre[n + 1], pre2[n + 1] = {0};
  for (int i = 1; i <= n; ++i) {
    cin >> arr[i];
    pre[i] = pre[i - 1] + arr[i];
  }
//  for (int i = n+2; i <=2*n+1 ; ++i) {
//    cout<<arr[i+1-n]<<" ";
////    if (i==n+1) continue;
//    pre[i]=pre[i-1]+arr[i-n];
//  }

  sort(arr+1, arr + n + 1);
  for (int i = 1; i <= n; ++i) {
    pre2[i] = pre2[i - 1] + arr[i];
  }
  int q;
  cin >> q;
  while (q--) {
    int type, l, r;
    cin >> type >> l >> r;
    if (type == 1) cout << pre[r] - pre[l - 1] << endl;
    else cout << pre2[r] - pre2[l - 1] << endl;
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