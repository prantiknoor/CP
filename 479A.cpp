#include <bits/stdc++.h>
using namespace std;



int main() {
  int n = 3;
  vector<int> inputs(n);
  vector<int> exp;
  int val = 0;
  for (int i = 0; i < n; i++) {
    cin >> inputs[i];
  }
  if(inputs[i] == 1) {
    exp.push_back(inputs[i]);
  }
  for(int i = 1; i < n-1; i++) {
    if(inputs[i] == 1) {
      if(inputs[i+1] > inputs[i-1]) {
        exp.push_back(inputs[i+1]);
        i++;
      } else {
        exp.push_back(inputs[i-1]);
      }
    }
  }
  for (int i = 2; i >= 0; i--) {
  for(int i = 0; i < 3; i++) {
    if((val + nums[i]) > (val * nums[i])) {
      val += nums[i];
    } else {
      val *= nums[i];
    }
  }
  cout << val;
}

// 6 7 1 3 1