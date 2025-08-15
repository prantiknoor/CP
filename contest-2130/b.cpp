#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, s, sum = 0;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      sum += a[i];
    }
    if (s < sum) {
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
    } else if (s == 4) {
      for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
          cout << "0 ";
        }
      }
      for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
          cout << "2 ";
        }
      }
      for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
          cout << "1 ";
        }
      }
    } else {
      cout << -1;
    }
    cout << endl;
  }
}