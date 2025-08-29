#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int n;
  while (cin >> n) {
    int v = 0, in = 0;
    for (int i = 1; in < n; i++) {
      for (int j = 0; j < i && in < n; j++) {
        v++;
        in += i;
        for (int k = 0; k < i; k++) {
          cout << v << " "; 
        }
        cout << endl;
      }
      // cout << in << endl;
    }
    cout << in << endl;
  }
}