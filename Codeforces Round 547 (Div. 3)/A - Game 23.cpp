#include <bits/stdc++.h>
using namespace std;

#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int solve(int n, int m) {
  if (n == m) return 0;
  if (n > m) return -1;

  int ans = solve(n * 2, m);
  int ans2 = solve(n * 3, m);

  if (ans == -1 && ans2 == -1) return -1;
  else return (ans == -1 ? ans2 : ans) + 1; 
}

int main() {
  Barcelona
  int n, m;
  cin >> n >> m;
  cout << solve(n, m);
  return 0;
}
