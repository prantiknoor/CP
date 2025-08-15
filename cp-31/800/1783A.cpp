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
    sort(nums.begin(), nums.end(), greater<int>());
    if (nums.front() == nums.back())
      cout << "NO";
    else {
      cout << "YES" << endl;
      if (nums[0] == nums[1]) {
        swap(nums[1], nums.back());
      }
      for (int num : nums) {
        cout << num << " ";
      }
    }
    cout << endl;
  }
}