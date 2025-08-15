#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, max = 0, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a == 0)
        count++;
      else {
        if (count > max) max = count;
        count = 0;
      }
    }
    if (count > max) max = count;
    cout << max << endl;
  }
}