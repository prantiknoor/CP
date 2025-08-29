#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, kx, ky, qx, qy, count = 0;
    set<pair<int, int>> k, q;

    cin >> a >> b >> kx >> ky >> qx >> qy;

    for (int i = 0; i < 4; i++) {
      int s1 = ((i >> 1) & 1) ? -1 : 1;
      int s2 = (i & 1) ? -1 : 1;

      k.insert({kx + s1 * a, ky + s2 * b});
      k.insert({kx + s1 * b, ky + s2 * a});

      q.insert({qx + s1 * a, qy + s2 * b});
      q.insert({qx + s1 * b, qy + s2 * a});
    }
    for (auto pos : k) {
      if (q.find(pos) != q.end()) count++;
    }

    cout << count << endl;
  }
}