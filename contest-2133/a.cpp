#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    set<int> g;
    for (int i = 0, a; i < n; i++) {
      cin >> a;
      g.insert(a);
    }
    cout << (n > g.size() ? "YES" : "NO") << endl;
  }
}