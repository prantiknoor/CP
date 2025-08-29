#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, a, b;
    cin >> n >> a >> b;
    if (b >= a) {
      cout << (b % 2 == n % 2 ? "YES" : "NO") << endl;
    } else {
      cout << (b % 2 == n % 2 && a % 2 == n % 2 ? "YES" : "NO") << endl;
    }
  }
}