#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, s, score = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> s;
      score += (s == 0 ? 1 : s);
    }
    cout << score << endl;
  }
}