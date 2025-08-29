#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> calc_divisors(int n) {
  set<int> divisors;
  for (int divisor = 1; divisor * divisor <= n; divisor++) {
    if (n % divisor == 0) {
      divisors.insert(divisor);
      divisors.insert(n / divisor);
    }
  }
  vector<int> divs;
  copy(divisors.begin(), divisors.end(), back_inserter(divs));
  return divs;
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int n, ans = 1;
    cin >> n;
    vector<int> divisors = calc_divisors(n);
    for (int i = 1, count = 1; i < n; i++) {
      if (divisors[i] - divisors[i - 1] == 1) {
        count++;
      } else {
        count = 1;
      }
      if (count > ans) ans = count;
    }
    cout << ans << endl;
  }
}