#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n;
  cin >> n;
  set<int> st;
  int count = 0;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (x % 2 == 0) {
      st.insert(x);
    }
  }
  while (st.size()) {
    auto it =--st.end();
    int x = *it;
    st.erase(it);
    if (x % 2 == 0) {
      st.insert(x / 2);
      count++;
    }
  }
  cout << count << endl;
}

int main() {
  Barcelona;
  int tc = 1;
  cin >> tc;
  while (tc--) {
    Messi();
  }
}