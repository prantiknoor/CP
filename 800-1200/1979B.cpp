#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int x, y, c = 0;
    cin >> x >> y;
    while (((x >> c) & 1) == ((y >> c) & 1)) c++;
    cout << (1 << c) << endl;
  }
}