#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, mul = 1;
    float sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      sum += a;
      mul *= a;
    }
    if (sum >= 0)
      cout << (mul == -1) << endl;
    else {
      int op = ceil(-sum / 2);
      mul *= (op % 2 ? -1 : 1);
      if (mul == -1) op++;
      cout << op << endl;
    }
  }
}