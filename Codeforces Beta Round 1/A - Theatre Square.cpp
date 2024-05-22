#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  ll n, m, a;
  cin >> n >> m >> a;
  if (n % a == 0) n /= a;
  else n = (n / a) + 1;
  if (m % a == 0) m /= a;
  else m = (m / a) + 1;
  cout << n * m;
  return 0;
}