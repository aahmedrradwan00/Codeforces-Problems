#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  ll n, q;
  cin >> n;
  int arr1[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr1[i];
    if (i) arr1[i] += arr1[i - 1];
  }
  cin >> q;
  for (int i = 0; i < q; ++i) {
    int x;
    cin >> x;
    int l = 0, r = n - 1, mid, ans;
    while (l <= r) {
//      2 9 12 16 25
      mid = (l + r) / 2;
      if (arr1[mid] >= x) {
        ans = mid;
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    cout << ans + 1 << "\n";
  }
  return 0;
}


//int res = 0;
//int l = 0, r = n - 1;
//int mid;
//while (l <= r) {
//mid = (l + r) / 2;
//if (arr1[mid] <= x) {
//l = mid + 1;
//res = mid + 1;
//} else if (arr1[mid] > x) {
//r = mid - 1;
//}
//}