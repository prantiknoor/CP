#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      if (!ans && a == k) {
        ans = 1;
      }
    }
    cout << (ans ? "Yes" : "No") << endl;
  }
}