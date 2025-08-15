#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    bool flag = false;
    for (int i = 0; i < nums.size() && !flag; i++) {
      for (int j = i + 1; j < nums.size() && !flag; j++) {
        if (__gcd(nums[i], nums[j]) <= 2) {
          flag = true;
        }
      }
    }
    cout << (flag ? "YES" : "NO") << endl;
  }
}