#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n, m;
  cin >> n >> m;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  deque<int> dq(n);
  iota(all(dq), 0);
  while (dq.size() > 1) {
    int idx = dq.front();
    arr[idx] -= m;
    if (arr[idx] > 0) dq.push_back(idx);
    dq.pop_front();
  }
  cout << dq.front()+1;
}

int main() {
  Barcelona;
  int tc = 1;
//    cin >> tc;
  while (tc--) {
    Messi();
  }
}