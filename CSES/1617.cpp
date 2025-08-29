#include <bits/stdc++.h>
#define int long long
using namespace std;

int pow(int b, int p, int m) {
  if (p == 0) return 1;
  int x = pow(b, p >> 1, m);
  if (p & 1) {
    return (b * x * x) % m;
  } else {
    return (x * x) % m;
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  cout << pow(2, n, 1e9+7) << endl;
}