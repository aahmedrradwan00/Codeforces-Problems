#include <bits/stdc++.h>

using namespace std;

int main() {

  int a = 0, b = 1, c = 0;

  int n;
  cin >> n;
  vector<int> v;

  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;

    if (x == 1) {
      a++;
      if (i != 1) v.push_back(b);
      b = 1;
    } else {
      b++;
    }
    if (i == n) v.push_back(b);
  }
  cout << v.size() << endl;
  for (auto it: v) cout << it << " ";
}