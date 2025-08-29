#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long long int a, b, k, gcd;
    cin >> a >> b >> k;
    gcd = __gcd(a, b);
    cout << (a / gcd <= k && b / gcd <= k ? 1 : 2) << endl;
  }
}