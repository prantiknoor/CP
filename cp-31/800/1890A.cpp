#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, b = 0, c, flag = 1;
    int a_count = 1, b_count = 0;
    cin >> n >> a;
    for (int i = 1; i < n; i++) {
      cin >> c;
      if (a != c && b == 0) {
        b = c;
        b_count++;
      } else if (c == a) {
        a_count++;
      } else if (c == b) {
        b_count++;
      } else {
        flag = 0;
      }
    }

    if (flag == 1 &&
        (a_count == 0 || b_count == 0 || abs(a_count - b_count) <= 1)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}