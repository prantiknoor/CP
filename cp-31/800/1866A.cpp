#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, min = 1e5;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a < 0) {
      if (-a < min) min = -a;
    } else if (a < min) {
      min = a;
    }
  }
  cout << min;
}