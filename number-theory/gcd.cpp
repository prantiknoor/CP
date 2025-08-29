#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << " ";
    cout << (a * b / gcd(a, b)) << endl;
  }
}