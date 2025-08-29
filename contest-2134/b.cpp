#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0, a; i < n; i++) {
      cin >> a;
      if (k & 1)
        v[i] = (a & 1) ? a + k : a;
      else {
        while (a <= 1e9 && a % 3 != 0) a += k;
        if (a % 3 != 0) {
          while (a <= 1e9 && a % 5 != 0) a += k;
        }
      }
      v[i] = a;
    }
    for (auto num : v) cout << num << " ";
    cout << endl;
  }
}