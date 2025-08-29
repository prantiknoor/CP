#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<int> v(26);
  deque<char> ans;
  char c;
  while (cin >> c) v[c - 'A']++;
  int oddCount = 0, oddIndex = 0;
  for (int i = 0; i < 26; i++) {
    if (v[i] & 1) {
      oddCount++;
      oddIndex = i;
    }
  }
  if (oddCount > 1) {
    cout << "NO SOLUTION";
  } else {
    if (oddCount) {
      ans.push_back('A' + oddIndex);
      v[oddIndex]--;
    }
    for (int i = 0; i < 26; i++) {
      while (v[i]) {
        ans.push_front('A' + i);
        ans.push_back('A' + i);
        v[i] -= 2;
      }
    }
    for (auto ch : ans) {
      cout << ch;
    }
  }
}