#include <bits/stdc++.h>

using namespace std;
#define Barcelona ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long

int main() {
  Barcelona
  int tc;
  cin >> tc;
  while (tc--) {
    double x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;

//    x1 *= (100 * pow(10, p1 - 2));;
//    x2 *= (100 * pow(10, p2 - 2));

    while (x1 >= 10) {
      x1 /= 10;
      p1++;
    }
    while (x2 >= 10) {
      x2 /= 10;
      p2++;
    }
    if (p1 > p2) cout << ">";
    else if (p1 < p2) cout << "<";
    else {
      if (x1 > x2) cout << ">";
      else if (x1 < x2) cout << "<";
      else cout << "=";
    }
    cout << "\n";
  }
  return 0;
}