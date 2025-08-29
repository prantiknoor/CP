#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, prev, curr, ans = 0;
  cin >> n >> prev;
  while (--n) {
    cin >> curr;
    if (curr < prev) {
      ans += (prev - curr);
    } else {
      prev = curr;
    }
  }
  cout << ans;
}