#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, prev, a, op = 0;
    cin >> n >> prev;
    for (int i = 1; i < n; i++) {
      cin >> a;
      if (prev % 2 == a % 2) op++;
      prev = a;
    }
    cout << op << endl;
  }
}