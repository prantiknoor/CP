#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, done = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int i = 1; i < n; i++) {
      if (abs(nums[i - 1] - nums[i]) >= 2) {
        cout << "YES\n" << i << " " << (i + 1) << endl;
        done = 1;
        break;
      }
    }
    if (!done) cout << "NO\n";
  }
}