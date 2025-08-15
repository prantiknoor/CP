#include <bits/stdc++.h>
using namespace std;

void printFactors(int n) {
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      cout << i << ' ';
      if (i != n / i) cout << n / i << ' ';
    }
  }
}

bool isPrime(int n) {
  for (int i = 2; i * i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

vector<bool> sieve(int n) {
  vector<bool> primes(n + 1, true);

  primes[0] = false;
  primes[1] = false;

  for (int i = 2; i <= n; i++) {
    if (primes[i]) {
      for (int j = i * i; j < n; j += i) {
        primes[j] = false;
      }
    }
  }

  return primes;
}

int main() {
  int num;
  cin >> num;
  printFactors(num);
  cout << endl;
  cout << (isPrime(num) ? "Yes" : "No") << endl;

  auto primes = sieve(num);
  for (int i = 0; i < primes.size(); i++) {
    cout << i << " -> " << primes[i] << endl;
  }
}