#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;

long long int f(long long int x) { return (x & 1 ? (3 * x + 1) : x >> 1); }

long long int g(long long int x, int k) {
  while (k--) {
    x = f(x);
  }
  return x;
}

int main() {
  int k, sum = 0;
  long long int n;
  cin >> n >> k;
  for (int i = 1; i <= n; i += 2) {
    sum += g(i, k);
    cout << i << ": " << g(i, k) << endl;
  }
  for (int i = 2; i <= n; i += 2) {
    sum += g(i, k);
    cout << i << ": " << g(i, k) << endl;
  }
  // while(n) {
  //   sum = (g(n--, k) + sum) % MOD;
  // }
  cout << sum;
}