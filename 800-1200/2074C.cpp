#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int x, y = 1;
    cin >> x;
    while (y < x && !((x + y) > (x ^ y) && (x ^ y) > (x - y))) y++;
    cout << (y == x ? -1 : y) << endl;
  }
}