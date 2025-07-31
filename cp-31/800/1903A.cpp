#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, prev;
    bool isSorted = true;
    cin >> n >> k >> prev;
    for (int i = 1; i < n; i++) {
      int a;
      cin >> a;
      if (isSorted && a < prev) {
        isSorted = false;
      }
      prev = a;
    }
    cout << ((isSorted || k > 1) ? "Yes" : "No") << endl;
  }
}