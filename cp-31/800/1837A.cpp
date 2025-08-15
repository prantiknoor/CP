#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int x, k;
    cin >> x >> k;
    if (x % k)
      cout << 1 << endl << x << endl;
    else
      cout << 2 << endl << "1 " << x - 1 << endl;
  }
}