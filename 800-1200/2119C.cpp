#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, l, r, k;
    cin >> n >> l >> r >> k;
    if (n & 1)
      cout << l << endl;
    else if (n == 2)
      cout << -1 << endl;
    else {
      int bits = 1, num = l;
      while (num >>= 1) bits++;
      num = 1LL << bits;
      if (num <= r) {
        cout << (k <= (n - 2) ? l : num) << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
}