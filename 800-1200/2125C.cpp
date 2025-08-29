#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  vector<int> p{2, 3, 5, 7};
  vector<int> divisors(1 << p.size());
  for (int i = 0; i < (1 << p.size()); i++) {
    int divisor = 1;
    for (int b = 0; b < p.size(); b++) {
      if ((i >> b) & 1) {
        divisor *= -p[b];
      }
    }
    divisors[i] = divisor;
  }
  while (T--) {
    int l, r, c, sum = 0;
    cin >> l >> r;

    for (auto div : divisors) {
      sum += r / div - (l - 1) / div;
    }

    cout << sum << endl;
  }
}