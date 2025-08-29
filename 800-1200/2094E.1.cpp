#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> bits(31, 0);
    for (int i = 0; i < n; i++) { 
      cin >> nums[i]; 
      for(int bit = 0; bit < 31; bit++) {
        bits[bit] += ((nums[i] >> bit) & 1);
      }
    }
    int max_sum = 0;
    for (int num : nums) {
      int sum = 0;
      for (int bit = 0; bit < 31; bit++) {
        if ((num >> bit) & 1) {
          sum += (1 << bit) * (n - bits[bit]);
        } else {
          sum += (1 << bit) * bits[bit];
        }
      }
      if (sum > max_sum) max_sum = sum;
    }
    cout << max_sum << endl;
  }
}