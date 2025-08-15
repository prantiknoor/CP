#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, b, c, d;
    string seq = "LL";
    cin >> n >> a >> b >> c >> d;
    for (int i = 0; i < n - 2; i++) {
      if (a > b) {
        if (c < b) {
          seq += 'L';
          a = b;
          b = c;
        } else {
          seq += 'R';
        }
      }
    }
  }
}