#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, op = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    for (int i = 1; i + 1 < n; i += 2) {
      op += max(0ll, nums[i - 1] - nums[i]);
      if(nums[i-1] >= nums[i]) {
        op += nums[i+1];
        nums[i+1] = 0;
      } else {
        int minus = max(0ll, nums[i-1] + nums[i+1] - nums[i]);
        op += minus;
        nums[i+1] -= minus;
      }
    }
    if (n % 2 == 0) op += max(0ll, nums[n - 2] - nums[n - 1]);
    cout << op << endl;
  }
}