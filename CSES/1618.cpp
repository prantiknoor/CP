#include <bits/stdc++.h>
#define int long long
using namespace std;

int pow5(int p) {
  if (p == 0) return 1;
  int x = pow5(p >> 1);
  return (p & 1) ? 5 * x * x : x * x;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, z = 0;
  cin >> n;
  for (int p = 1; n >= pow5(p); p++) z += (n / pow5(p));
  cout << z;
}