#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int x, y = 0;
    cin >> x;
    for (int bit = 0; bit < 31; bit++) {
      if ((x >> bit) & 1) {
        y |= 1 << bit;
        break;
      }
    }
    for (int bit = 0; bit < 31; bit++) {
      if (!((x >> bit) & 1)) {
        y |= (1 << bit);
        break;
      }
    }
    cout << (y < x ? y : -1) << endl;
  }
}