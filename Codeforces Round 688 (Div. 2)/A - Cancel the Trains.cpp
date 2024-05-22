#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n, m;
  cin >> n >> m;
  set<int> st;

  for (int i = 0; i < n + m; ++i) {
    int x;
    cin >> x;
    st.insert(x);
  }
  cout << (m + n) - st.size()<<endl;
}

int main() {
  Barcelona;
  int tc = 1;
  cin >> tc;
  while (tc--) {
    Messi();
  }
}