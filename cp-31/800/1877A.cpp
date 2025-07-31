#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
      int e;
      cin >> e;
      sum += e;
    }
    cout << -sum << endl;
  }
}