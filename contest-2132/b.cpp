#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, d = 11;
    cin >> n;
    vector<int> ans;
    while (n >= d) {
      if (n % d == 0) {
        ans.push_back(n / d);
      }
      d = (d - 1) * 10 + 1;
    }
    if (ans.empty())
      cout << "0\n";
    else {
      cout << ans.size() << endl;
      for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
      cout << endl;
    }
  }
}