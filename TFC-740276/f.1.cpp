#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  long long int max_sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> nums[i];
    max_sum += nums[i];
  }
  for(int i = 0; i < n; i++) {
    long long int sum = 0;
    for(int j = 0; j < n; j++) {
      sum += (nums[i] ^ nums[j]);
    }
    if(sum > max_sum) {
      max_sum = sum;
    }
  }
  cout << max_sum << endl;
}