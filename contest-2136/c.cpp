#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, ans = 0;
    cin >> n;
    vector<int> v(n + 1), look(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1, max = 0; i <= n; i++) {
      look[v[i]]++;
      if (v[i] > max) max = v[i];
      cout << v[i] << " " << look[v[i]] << endl;
      if ((look[v[i]] / v[i]) * v[i] >= max) {
        // max = (look[v[i]] / v[i]) * v[i];
        cout << "caught\n";
      }
      if (look[max] == max) {
        for (int i = 1; i <= max; i++) {
          if ((look[i] / i) * i >= max) max = (look[i] / i) * i;
          look[i] = 0;
        }
        ans += max;
        max = 0;
      }
    }
    int max = 0;
    for (int i = 1; i <= n; i++) {
      if ((look[i] / i) * i > max) max = (look[i] / i) * i;
    }
    ans += max;
    cout << ans << endl;
  }
}