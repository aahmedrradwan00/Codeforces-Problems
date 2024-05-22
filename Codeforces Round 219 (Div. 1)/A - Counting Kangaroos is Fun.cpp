#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

int main() {
  ll n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  sort(arr, arr + n);
  int a = 0, b = (n + 1) / 2;
  ll ans = 0;

  while (a < n / 2 && b < n) {
    if (arr[b] >= 2 * arr[a]) {
      ans++;
      a++;
    }
    b++;
  }
  cout << n - ans;
  return 0;
}