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
    vector<int> g(n);
    for (int i = 0; i < n; i++) cin >> g[i];
    sort(g.begin(), g.end());
    int e = n % 2 ? g[0]: 0;
    for (int i = g.size() - 1; i > 0; i -= 2) {
      e += g[i];
    }
    cout << e << endl;
  }
}

