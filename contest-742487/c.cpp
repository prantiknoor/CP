#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isPermutation(int n, int a) {
  vector<int> dn(10, 0), da(10, 0);
  while (n) {
    dn[n % 10]++;
    n /= 10;
  }
  while (a) {
    da[a % 10]++;
    a /= 10;
  }
  for (int i = 0; i < 10; i++) {
    if (dn[i] != da[i]) {
      return false;
    }
  }
  return true;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, count = 0;
    cin >> n;
    set<int> divisors;
    for (int i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        divisors.insert(i);
        divisors.insert(n / i);
      }
    }
    for (auto divisor : divisors) {
      if (isPermutation(n, divisor)) count++;
    }
    cout << count << endl;
  }
}