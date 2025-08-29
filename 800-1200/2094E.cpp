#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    long long int max_sum = 0;
    for(auto  num1 : nums) {
      long long int sum = 0;
      for(auto num2 : nums) {
        sum += (num1 ^ num2);
      }
      if(sum > max_sum) {
        max_sum = sum;
      }
    }
    cout << max_sum << endl;
  }
}