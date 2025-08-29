#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> p(n + 1);
  for (int i = 1; i <= n; i++) cin >> p[i];
  sort(p.begin(), p.end());
  for (int i = 0; i <= n; i++) cout << p[i] << " ";
  cout << endl;
  for (int i = 1; i <= n; i++) p[i] += p[i - 1];
  for (int i = 0; i <= n; i++) cout << p[i] << " ";
  int min_diff = p[n];
  for (int l = 0; l < n; l++) {
    int diff = abs(2 * (p[n] - p[n - 1] + p[l]) - p[n]);
    if (diff < min_diff) min_diff = diff;
  }
  // cout << min_diff;
}