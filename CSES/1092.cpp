#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<bool> nums(n + 1, false);

  int sum = n * (n + 1) / 2;
  if (sum & 1) {
    cout << "NO" << endl;
  } else {
    sum >>= 1;
    int psum = 0;
    int count = 1;
    while (psum + n < sum) {
      psum += n;
      nums[n--] = true;
      count++;
    }
    nums[sum - psum] = true;
    cout << "YES\n" << count << endl;
    for (int i = 1; i < nums.size(); i++) {
      if (nums[i]) cout << i << " ";
    }
    cout << endl << nums.size() - count - 1 << endl;
    for (int i = 1; i < nums.size(); i++) {
      if (!nums[i]) cout << i << " ";
    }
  }
}