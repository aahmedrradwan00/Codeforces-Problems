#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
const int MAX_INT = 10005;

int main() {
  ll n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  int l = 0, r = n - 1;
  int ans[2] = {};
  bool turn = 0;
  while (r >= l) {
    if (arr[r] > arr[l]) {
      ans[turn] += arr[r];
      r--;
    } else {
      ans[turn] += arr[l];
      l++;
    }
    turn ^= 1;
  }
  cout << ans[0] << " " << ans[1];

  return 0;
}
	   			 	  	  	 			  		 			