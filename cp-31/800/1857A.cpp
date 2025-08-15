#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a % 2) odd++;
    }
    cout << (odd % 2 ? "No" : "Yes") << endl;
  }
}