#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, m, op = 0;
    string x, s;
    cin >> n >> m;
    cin >> x >> s;
    while (x.size() < s.size()) {
      x += x;
      op++;
    }
    if (x.find(s) < 25) {
      cout << op << endl;
    } else if ((x + x).find(s) < 25) {
      cout << ++op << endl;
    } else {
      cout << -1 << endl;
    }
  }
}