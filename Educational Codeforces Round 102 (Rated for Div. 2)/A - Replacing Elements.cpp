#include <bits/stdc++.h>

using namespace std;


int main() {
  int tc;cin >> tc;
  while (tc--) {
    int n, d,count = 0;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; ++i) {
      if (arr[i] > d) {
        arr[i] = arr[0] + arr[1];
      }
      if (arr[i] > d) count++;
    }
    if (count) cout << "NO";
    else cout << "YES";
    cout << endl;
  }
}