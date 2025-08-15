#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, count = 1;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    bool flag = (a[n - 1] == b[n - 1]) &&
                (a[n - 2] == b[n - 2] || (a[n - 2] ^ a[n - 1]) == b[n - 2]);
    for (int i = n - 3; i >= 0 && flag; i--) {
      if (!(a[i] == b[i] || (a[i] ^ a[i + 1]) == b[i] ||
            (a[i] ^ b[i + 1]) == b[i])) {
        flag = false;
      }
    }
    cout << (flag ? "Yes" : "No") << endl;
  }
}