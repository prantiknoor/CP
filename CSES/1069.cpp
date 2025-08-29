#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  cin >> s;

  int max_rep = 0, count = 1;
  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] == s[i])
      count++;
    else {
      max_rep = max(max_rep, count);
      count = 1;
    }
  }
  max_rep = max(max_rep, count);
  cout << max_rep;
}