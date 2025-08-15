#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    bool flag = true;
    for (int i = 2; i < n; i++) {
      if (nums[i - 2] == -1) nums[i - 2] = 1;
      if (nums[i - 1] == -1) nums[i - 1] = 1;

      if (nums[i - 2] == 0 || nums[i - 1] == 0 || nums[i] == 0) {
        flag = false;
        break;
      } else if (nums[i - 2] == -1 && nums[i - 1] == nums[i]) {
        nums[i - 2] = nums[i];
      } else if (nums[i - 1] == -1 && nums[i - 2] == nums[i]) {
        nums[i - 1] = nums[i];
      } else if (nums[i] == -1 && nums[i - 2] == nums[i - 1]) {
        nums[i] = nums[i - 1];
      } else if (nums[i - 2] == nums[i - 1] == nums[i]) {
      } else {
        flag = false;
        break;
      }
    }
    cout << (flag ? "YES" : "NO") << endl;
  }
}