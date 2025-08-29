#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, x;
    cin >> n >> k >> x;
    int min = (k * (k + 1)) / 2;
    int max = (k * (n - k + 1 + n)) / 2;
    cout << (x >= min && x <= max ? "YES" : "NO") << endl;
  }
}