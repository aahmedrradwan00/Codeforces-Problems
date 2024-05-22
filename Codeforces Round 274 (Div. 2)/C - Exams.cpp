//#include <bits/stdc++.h>
//
//using namespace std;
//#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//#define ll long long
//const int MAX_INT = 10005;
//
//int main() {
//
//  ll n;
//  cin >> n;
//  pair<ll, ll> pr[n];
//  ll arr[n];
//  for (int i = 0; i < n; ++i) {
//    cin >> pr[i].first >> pr[i].second;
//    arr[i] = pr[i].second;
//  }
//  sort(pr, pr + n);
//  sort(arr, arr + n);
//
//  if (pr[n - 1].second == arr[n - 1]) cout << pr[n - 1].second;
//  else cout << pr[n - 1].first;
//
//  return 0;
//}


#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

int main() {

  ll n;
  cin >> n;
  pair<ll, ll> pr[n];
  for (int i = 0; i < n; ++i) {
    cin >> pr[i].first >> pr[i].second;
  }
  sort(pr, pr + n);
  int mx=0;
  for (int i = 0; i < n; ++i) {
    if (pr[i].second >= mx) mx = pr[i].second;
    else mx = pr[i].first;
  }
  cout << mx;
  return 0;
}
