#include <bits/stdc++.h>
#define int long long
#define endline '\n'
using namespace std;

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--) {
    int l, r, ans;
    cin >> l >> r;
    ans = r - l;
    if (r == 1) ans++;
    cout << ans << endline;
  }
}