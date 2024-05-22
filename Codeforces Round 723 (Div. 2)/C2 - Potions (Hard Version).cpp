#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(v) v.begin(), v.end()


void Messi() {
  int n;
  cin >> n;
  ll helth = 0;
  priority_queue<int>pq;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    helth += x;
    pq.push(-x);
    while (pq.size()&&helth<0){
     helth+= pq.top();
     pq.pop();
  }
    }
    cout << pq.size();
}
  int main() {
    Barcelona;
    int tc = 1;
//    cin >> tc;
    while (tc--) {
      Messi();
    }
  }