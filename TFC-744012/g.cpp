#include <bits/stdc++.h>
// #define int long long
#define endline '\n'
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int n, ans = 0;
  cin >> n;
  vector<int> v(n);
  for(int i = 0; i < n; i++) cin >> v[i];
  for(int a = 0; a < n; a++) {
    for(int b = a; b < n; b++) {
      set<int> s;
      for(int i = a; i <= b; i++) s.insert(v[i]);
      ans += s.size();
    }
  }
  cout << ans << endline;
}