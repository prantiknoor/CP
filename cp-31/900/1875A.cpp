#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int T;
  cin >> T;
  while (T--) {
    int a, b, n;
    cin >> a >> b >> n;
    for (int i = 0, x; i < n; i++) {
      cin >> x;
      b += min(x, a - 1);
    }
    cout << b << endl;
  }
}