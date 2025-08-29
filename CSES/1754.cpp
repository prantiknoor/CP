#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    int dif = abs(a - b);
    if (dif > min(a, b)) {
      cout << "NO\n";
    } else {
      if (a > b) a -= 2 * dif, b -= dif;
      if (b > a) a -= dif, b -= 2 * dif;

      cout << (a % 3 == 0 && b % 3 == 0 ? "YES" : "NO") << endl;
    }
  }
}