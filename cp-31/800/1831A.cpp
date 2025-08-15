#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    int max = *max_element(p.begin(), p.end());
    for (int a : p) {
      cout << max + 1 - a << " ";
    }
    cout << endl;
  }
}