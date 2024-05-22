#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

int main() {
  ll n, target;
  cin >> n >> target;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int l = 0, r = 0;
  int sum = 0, ans = 0;
  while (l < n) {
    while (r < n && sum + arr[r] <= target) {
      sum += arr[r];
      r++;
    }
    ans = max(ans, r - l);
    sum -= arr[l];
    l++;
  }
  cout << ans;

  return 0;
}