#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d - b < 0 || (a - b - c + d) < 0)
      cout << -1 << endl;
    else
      cout << (a - 2 * b - c + 2 * d) << endl;
  }
}