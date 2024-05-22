#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  swap(arr[0], arr[n - 1]);

  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  return 0;
}