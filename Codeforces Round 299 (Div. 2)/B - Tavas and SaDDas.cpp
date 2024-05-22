#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

const int N = 20;
ll n;

ll slove(ll x = 0, ll idx = 0) {
  if (x > n) return -1;
  if (x == n) return idx;
  return max(slove(x * 10 + 4, 2 * idx + 1), slove(x * 10 + 7, 2 * idx + 2));
}

int main() {
  Barcelona
  cin >> n;
  cout << slove();

}
