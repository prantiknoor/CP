#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
  vector<bool> is_primes(n + 1, true);
  is_primes[0] = is_primes[1] = false;
  for (int i = 2; i <= n; i++) {
    if (is_primes[i]) {
      for (int j = i * i; j < n; j += i) {
        is_primes[j] = false;
      }
    }
  }
  return is_primes;
}

int solve(int n) {
  auto is_primes = sieve(n);
  for (int i = 2; i*2 < n; i++) {
    if (is_primes[i] && is_primes[n - i]) {
      return i;
    }
  }
  return -1;
}

int main() {
  int n;
  cin >> n;
  // cout << solve(n) == -1 ? -1 :
  // sieve(5);
  int i = solve(n);
  if (i == -1)
    cout << -1;
  else
    cout << i << " " << n - i;
}