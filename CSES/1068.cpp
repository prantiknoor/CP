#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(int n) {
  cout << n << " ";
  if (n == 1);
  else if(n & 1) solve(3*n + 1);
  else solve(n >> 1);
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  
  solve(n);
}