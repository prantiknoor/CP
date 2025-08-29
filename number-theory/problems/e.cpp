#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int x, y;
    cin >> x >> y;
    cout << (x - y == 1 ? "NO" : "YES") << endl;
  }
}