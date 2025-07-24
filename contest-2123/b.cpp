#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, j, k, max = 0, jth, s;
    cin >> n >> j >> k;
    for (int i = 1; i <= n; i++) {
      cin >> s;
      if (s > max) {
        max = s;
      }
      if (i == j) {
        jth = s;
      }
    }

    if (k >= 2 || jth == max) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}