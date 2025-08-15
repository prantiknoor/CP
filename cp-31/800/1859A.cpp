#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }
    sort(v.begin(), v.end());
    int max_count = 1;
    for (int i = n - 2; i >= 0; i--) {
      if (v[i] == v[n - 1]) max_count++;
    }
    if (max_count == n)
      cout << -1 << endl;
    else {
      cout << n - max_count << " " << max_count << endl;
      for (int a: v) {
        cout << a << " ";
      }
      cout << endl;
    }
  }
}