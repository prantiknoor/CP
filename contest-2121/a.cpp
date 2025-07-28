#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, s, left;
    cin >> n >> s >> left;
    int right = left;
    for (int i = 1; i < n; i++) {
      cin >> right;
    }
    cout << abs(right - left) + min(abs(s - left), abs(s - right)) << endl;
  }
}