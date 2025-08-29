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
  int T;
  cin >> T;
  while (T--) {
    int n, count = 0;
    cin >> n;
    for (int i = 2; i < 10; i++) {
      if (n % i == 0 && isPermutation(n, n / i)) count++;
    }
    cout << count << endl;
  }
}