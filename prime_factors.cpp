#include <bits/stdc++.h>
using namespace std;

vector<int> prime_factors(int n) {
  vector<int> factors {1};
  // 20 -> 2x10 -> 2x2x5
  while (n > 1) {
    for (int f = 2; f <= n; f++) {
      if (n % f == 0) {
        factors.push_back(f);
        n /= f;
        break;
      }
    }
  }
  return factors;
}

int main() {
  int n;
  cin >> n;
  vector<int> factors = prime_factors(n);
  for (int f : factors) {
    cout << f << " ";
  }
}