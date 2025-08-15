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
    for (int i = 0; i < n; i++) {
      if (a[i] - b[i] > 0) count += (a[i] - b[i]);
    }
    cout << count << endl;
  }
}