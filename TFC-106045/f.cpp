#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while(T--) {
    int n, m;
    double sum = 0;
    cin >> n >> m;
    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0, t; i < n; i++) {
      cin >> t;
      sum += 1.0/(t-s[i]+1);
    }
    cout << (sum/n) << endl;
  }
}