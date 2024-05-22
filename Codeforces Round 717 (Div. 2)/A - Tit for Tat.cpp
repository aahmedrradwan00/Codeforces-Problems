#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long


int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
      while (k&&arr[i]){
        k--;
        arr[i]--;
        arr[n-1]++;
      }
    }
    for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
  return 0;
}