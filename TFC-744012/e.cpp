#include <bits/stdc++.h>
#define int long long
#define endline '\n'
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<int> v(n), c(31);
  for(int i = 0; i < n; i++) {
    cin >> v[i];
    for(int b = 0; b < 31; b++) c[b] += ((v[i] >> b) & 1);
  }
  for(int i = 30; i >= 0; i--) {
    if(c[i] == 0) continue;

    
  };
}