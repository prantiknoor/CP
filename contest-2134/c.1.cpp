#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, op = 0;
    cin >> n;
    vector<int> v(n + !(n & 1));
    for (int i = 0; i < n; i++) cin >> v[i];
    if (!(n & 1)) n++;
    int s = n - 1;
    for (int i = 1; i < s; i += 2) {
      if (v[i - 1] > v[i]) {
        op += v[i - 1] - v[i];
        v[i - 1] = v[i];
      }
      int minus = max(0ll, v[i + 1] - (v[i] - v[i - 1]));
      if (minus > 0) v[i + 1] = v[i] - v[i - 1];
      op += minus;
    }
    cout << op << endl;
  }
}