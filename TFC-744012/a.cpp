#include <bits/stdc++.h>
#define int long long
#define endline '\n'
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int n, op1 = 0, op2 = 0;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) {
      if (i != v[i]) op1++;
    }
    for (int i = 1; i <= n; i++) {
      if (i != v[i]) {
        swap(v[v[i]], v[i]);
        op2++;
      }
    }
    int ans = 0;
    for (int a = 1; a <= n; a++) {
      for (int b = 1; b <= n; b++) {
        cout << a << ", " << b << " -> " << a * op1 << ", " << b * op2
             << endline;
        ans += min(a * op1, b * op2);
      }
    }
    cout << op1 << " " << op2 << " " << ans << endline;
  }
}