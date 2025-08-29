#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    string a, b, c;
    cin >> n >> a >> m >> b >> c;
    for (int i = 0; i < m; i++) {
      if (c[i] == 'V') {
        a = b[i] + a;
      } else {
        a += b[i];
      }
    }
    cout << a << endl;
  }
}