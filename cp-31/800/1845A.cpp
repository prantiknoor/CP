#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, x, m;
    cin >> n >> k >> x;
    if (k == 1) {
      cout << "NO";
    } else if (x != 1) {
      cout << "YES" << endl << n << endl;
      for (int i = 0; i < n; i++) {
        cout << "1 ";
      }
    } else if (k == 2) {
      if (n % 2)
        cout << "NO";
      else {
        m = n / 2;
        cout << "YES" << endl << m << endl;
        for (int i = 0; i < m; i++) {
          cout << "2 ";
        }
      }
    } else {
      m = n / 2;
      cout << "YES" << endl << m << endl;
      for (int i = 1; i < m; i++) {
        cout << "2 ";
      }
      cout << (n % 2 ? 3 : 2);
    }
    cout << endl;
  }
}