#include <bits/stdc++.h>
using namespace std;

long long int linear_sum(int n) { return (long long int)n * (n + 1) >> 1; }

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, count = 0;
    cin >> n;
    vector<vector<bool>> v(10, vector<bool>(n, false));
    map<string, bool> checks;
    for (int d = 0; d < n; d++) {
      long long int a;
      cin >> a;
      do {
        v[a % 10][d] = true;
      } while (a /= 10);
    }

    for (int d = 0; d < 10; d++) {
      int m = 0, k = 0;
      for (int i = 0; i < n; i++) {
        if (v[d][i]) m++;
        for (int j = i + 1; j < n; j++) {
          if (v[d][i] && v[d][j]) {
            string key = to_string(i) + to_string(j);
            cout << key << endl;
            if (checks[key])
              k++;
            else
              checks[key] = true;
          }
        }
      }
      count += (linear_sum(m - 1) - linear_sum(k - 1));
    }

    cout << count << endl;
  }
}