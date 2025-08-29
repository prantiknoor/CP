#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, k, m = 0;
    string s;
    cin >> n >> k >> s;
    vector<int> p(n);
    for (int i = 0, count = 0; i < n; i++) {
      if (s[i] == '1')
        count++;
      else
        count = 0;
      if (count > m) m = count;
    }
    if (k <= m) {
      cout << "NO\n";
    } else {
      for (int i = 0; i < p.size(); i++) {
        if (s[i] == '0') p[i] = n--;
      }
      for (int i = 0; i < p.size(); i++) {
        if (s[i] == '1') p[i] = n--;
      }
      cout << "YES\n";
      for (auto it : p) cout << it << " ";
      cout << endl;
    }
  }
}