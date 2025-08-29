#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    c -= a, d -= b;
    if ((a + b) / 3 <= min(a, b) && (c + d) / 3 <= min(c, d)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}