#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()
//const int MAX_VAL = 1e6 + 1;


void Messi() {
  string s;
  cin >> s;
  int count = 0;
  int pre[100005]={};
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == s[i - 1]) count++;
    pre[i] = count;
  }
  int q;
  cin >> q;
  while (q--) {
    int l, r, sum;
    cin >> l >> r;
    sum = pre[r-1] - pre[l-1];
    cout << sum<<endl;
  }
}

int main() {
  Barcelona;
  int tc = 1;
//  cin >> tc;
  while (tc--) {
    Messi();
  }
}