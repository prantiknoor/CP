#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, q;
    long long int count = 0;
    cin >> n >> q;
    vector<int> a(n);
    map<int, vector<int>> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < q; i++) {
      int p, l, r;
      cin >> p >> l >> r;
      if (s.count(p)) {
        l = max(l, s[p][0]);
        r = min(r, s[p][1]);
      }
      s[p] = {l, r};
    }
    for (auto p : s) {
      if (p.second[0] > p.second[1]) {
        count = -1;
        break;
      } else if (a[p.first - 1] < p.second[0] || a[p.first - 1] > p.second[1]) {
        count += min(abs(a[p.first - 1] - p.second[0]),
                     abs(a[p.first - 1] - p.second[1]));
      }
    }
    cout << count << endl;
  }
}