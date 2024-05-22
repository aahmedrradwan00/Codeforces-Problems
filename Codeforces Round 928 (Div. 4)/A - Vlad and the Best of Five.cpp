#include <bits/stdc++.h>

using namespace std;


int main() {

  int n;
  cin >> n;
  while (n--) {
    int ca=0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
      if (s[i] == 'A') ca++;
    }
    if (ca > 2) cout << "A\n";
    else cout << "B\n";
  }
}