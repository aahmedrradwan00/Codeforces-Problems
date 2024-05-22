#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  int b = 0, c = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > 0) b += arr[i];
    else c += arr[i];
  }
  cout << b - c;
  return 0;
}