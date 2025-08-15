#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
      s[i] %= k;
      cout << s[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
      cin >> t[i];
      t[i] %= k;
      cout << t[i] << " ";
    }
    cout << endl;
    sort(t.begin(), t.end());
    bool flag = true;
    for (auto si : s) {
      int pos = binary_search(t.begin(), t.end(), si);
      cout << pos << " ";
    }
  }
}