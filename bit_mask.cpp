#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int> nums) {
  vector<vector<int>> subsets;
  for(int i = 0; i < (1 << nums.size()); i++) {
    subsets.push_back(vector<int>());
    for(int j = 0; j < nums.size(); j++) {
      if((i & (1 << j)) != 0) {
        subsets.back().push_back(nums[j]);
      }
    }
  }
  return subsets;
}

int main() {
  vector<int> nums = {1, 2, 3, 4};
  vector<vector<int>> subsets = subset(nums);
  for(auto set : subsets) {
    cout << "{";
    for(auto item: set) {
      cout << item << ",";
    }
    cout << "} ";
  }
  cout << endl;
}