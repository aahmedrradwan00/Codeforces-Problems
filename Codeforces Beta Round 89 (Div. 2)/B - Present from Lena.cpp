#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int n;
  cin >> n;
  for (int i = 0; i <= n; ++i) {
    for (int k = 0; k < n * 2 - i * 2; ++k) {
      cout << " ";
    }
    for (int j = 0; j <= i; ++j) {
      cout << j;
      if (j < i) cout << " ";
    }
    for (int j = i - 1; j >= 0; --j) {
      cout << " " << j;
    }
    cout << "\n";
  }
  for (int i = n - 1; i >= 0; --i) {
    for (int k = n * 2 - i * 2; k > 0; --k) {
      cout << " ";
    }
    for (int j = 0; j <= i; ++j) {
      cout << j;
      if (j < i) cout << " ";
    }
    for (int j = i - 1; j >= 0; --j) {
      cout << " " << j;
    }
    cout << "\n";
  }
  return 0;
}