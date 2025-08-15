#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, prev, a, min = 1e9;
    cin >> n >> prev;
    for (int i = 1; i < n; i++) {
      cin >> a;
      if (a - prev < min) min = a - prev;
      prev = a;
    }
    if (min < 0)
      cout << 0 << endl;
    else
      cout << min / 2 + 1 << endl;
  }
}