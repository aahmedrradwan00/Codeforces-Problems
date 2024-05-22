#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define long long ll
const int MAX_INT = 10005;

int main() {
  Barcelona
  int n;
  cin >> n;
  string s;
  cin >> s;
  int al = n * 2;
  int arr[al];

  sort(s.begin(), s.begin() + n);
  sort(s.begin() + n, s.end());

  for (int i = 0; i < al; ++i) {
    arr[i] = s[i] - '0';
  }

  int cl = 0, cr = 0;
  for (int i = 0; i < n; ++i) {
    if (arr[i] > arr[i + n]) {
      cl++;
    }
    if (arr[i] < arr[i + n]) {
      cr++;
    }
  }
  cout << ((cr == n || cl == n) ? "YES" : "NO");
}