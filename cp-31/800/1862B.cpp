#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, a, b;
    vector<int> res;
    cin >> n >> a;
    res.push_back(a);
    for (int i = 1; i < n; i++) {
      cin >> b;
      if (a > b) {
        res.push_back(b);
      }
      res.push_back(b);
      a = b;
    }
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
      cout << res[i] << " ";
    }
    cout << endl;
  }
}