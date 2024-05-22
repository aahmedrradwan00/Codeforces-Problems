#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
  ll m, ans = 0;
  cin >> m;
  int arr[m];
  for (int i = 0; i < m; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + m);
  for (int i = 0; i < m; ++i) {
//    if (arr[i] > i + 1) {
//      while (arr[i] != i + 1) {
//        arr[i] -= 1;
//        ans++;
//      }
//    } else {
//      while (arr[i] != i + 1) {
//        arr[i] += 1;
//        ans++;
//      }
//    }
    ans+= abs(arr[i]-(i+1));
  }
  cout << ans;
  return 0;
}