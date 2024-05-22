#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  ll n, q;
  cin >> n >> q;
  int arr1[n];
  int arr2[q];
  for (int i = 0; i < n; ++i) {
    cin >> arr1[i];
  }
  for (int i = 0; i < q; ++i) {
    cin >> arr2[i];
  }

  int i = 0;
  sort(arr1,arr1+n);
  while (q--) {
    int res = 0;
    int l = 0, r = n - 1;
    int mid;
    while (l <= r) {
      mid = (l + r) / 2;
      if (arr1[mid] <= arr2[i]) {
        l = mid + 1;
        res = mid + 1;
      } else if (arr1[mid] > arr2[i]) {
        r = mid - 1;
      }
    }
    i++;
    cout << res << " ";
  }
  return 0;
}