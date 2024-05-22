#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  int arr[n];
  vector<int> neg, pos, zero;
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
    if (arr[i] < 0) neg.push_back(arr[i]);
    if (arr[i] > 0) pos.push_back(arr[i]);
    if (arr[i] == 0) zero.push_back(arr[i]);
  }
  if (pos.empty()) {
    pos.push_back(neg.back());
    neg.pop_back();
    pos.push_back(neg.back());
    neg.pop_back();
  }

  if (neg.size() %2==0) {
    zero.push_back(neg.back());
    neg.pop_back();
  }
  cout << neg.size() << " ";
  for (auto it: neg) cout << it << " ";
  cout << "\n";
  cout << pos.size() << " ";
  for (auto it: pos) cout << it << " ";
  cout << "\n";
  cout << zero.size() << " ";
  for (auto it: zero) cout << it << " ";

}