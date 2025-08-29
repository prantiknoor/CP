#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, m, a, b, turnsx = 1, turnsy = 1;
    cin >> n >> m >> a >> b;
    turnsx += ceil(log2(min(a, n - a + 1))) + ceil(log2(m));
    turnsy += ceil(log2(min(b, m - b + 1))) + ceil(log2(n));
    cout << min(turnsx, turnsy) << endl;
  }
}