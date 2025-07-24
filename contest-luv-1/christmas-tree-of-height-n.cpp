#include <bits/stdc++.h>
using namespace std;

double fact(int n) {
  if (n == 0) return 1;

  double res = n;
  while (--n > 0) {
    res *= n;
  }
  return res;
}

double nPr(int n, int r) {
  if (n == 0 || r == 0) return 1;
  double res = n;
  for (int i = 1; i < r; i++) {
    res *= (--n);
  }
  return res;
}

double nCr(int n, int r) { return nPr(n, r) / fact(r); }

int main() {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= i; j++) {
        printf("%.0lf ", nCr(i, j));
      }
      cout << endl;
    }
  }
}