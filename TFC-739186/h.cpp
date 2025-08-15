#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool up = (a[0] - a[1]) < 0;
  int p = 1;
  while (p < n && a[p - 1] - a[p] < 0 == up) p++;
  if (p == n) {
    cout << "NO";
  } else {
    while (p < n && a[p - 1] - a[p] < 0 == !up) p++;
    cout << (p == n ? "YES": "NO");
  }
}