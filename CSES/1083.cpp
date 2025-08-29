#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, sum=0;
  cin >> n;
  for(int i = 1, num; i < n; i++) {
    cin >> num;
    sum += num;
  }
  cout << (n*(n+1)/2 - sum) << endl;
}