#include <bits/stdc++.h>
#define int long long
using namespace std;

#define MOD 1000000007

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, ans = 1;
    string s;
    vector<int> c(26, 0);
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
      c[s[i] - 'a']++;
    }
    int p = 0;
    for (auto count : c) {
      if (count == 0) continue;
      p += count - 1;
    }
    while (p > 0) {
      ans = (ans * (1ll << min(30ll, p))) % MOD;
      p -= 30;
    }
    cout << ans << endl;
  }
}