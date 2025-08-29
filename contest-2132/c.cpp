#include <bits/stdc++.h>
#define int long long
using namespace std;

int coin(int x) { return pow(3ll, x + 1) + x * pow(3ll, x - 1); }

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, c=0;
    cin >> n;
    while(n) {
      cout << n << " ";
      int x = floor(log(n)/log(3ll));
      c += coin(x);
      n -= pow(3, x);
    }
    cout << endl;
    cout << c << endl;
  }
}