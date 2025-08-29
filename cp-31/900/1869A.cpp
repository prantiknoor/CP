#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    for (int i = 0, a; i < n; i++) cin >> a;
    cout << "4\n";
    if (n & 1) {
      cout << "1 2\n";
      cout << "1 2\n";
      cout << "2 " << n << endl;
      cout << "2 " << n << endl;
    } else {
      cout << "1 " << (n >> 1) << endl;
      cout << (n >> 1) + 1 << " " << n << endl;
      cout << "1 " << n << endl;
      cout << "1 " << n << endl;
    }
  }
}