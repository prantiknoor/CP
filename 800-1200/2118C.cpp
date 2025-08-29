#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, b = 0;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int bit = 0; bit < 61; bit++) {
      for (int num : nums) {
        if ((num >> bit) & 1) {
          b++;
        } else if (k >= (1ll << bit)) {
          k -= (1ll << bit);
          b++;
        }
      }
    }
    cout << b << endl;
  }
}