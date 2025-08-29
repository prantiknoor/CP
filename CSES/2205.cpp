#include <bits/stdc++.h>
#define int long long
using namespace std;

void printBinary(int num, int n) {
  while (--n >= 0) {
    cout << ((num >> n) & 1);
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int max = (1ll << n);
  for (int i = 0; i < max; i++) {
    printBinary(i, n);
    cout << endl;
  }
}