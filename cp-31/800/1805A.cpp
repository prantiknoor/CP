#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, x = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      x ^= a;
    }
    if(x == 0) cout << 0 << endl;
    else cout << (n%2 ? x: -1) << endl;
  }
}