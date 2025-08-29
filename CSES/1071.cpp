#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int y, x, n, v;
    cin >> y >> x;
    n = max(y, x);
    v = n * n - n + 1;
    v += (n - min(y, x)) * ((n & 1) ? 1 : -1) * (y < n ? 1: -1);
    cout << v << endl;
  }
}