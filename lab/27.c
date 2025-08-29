#include <stdio.h>

short int primes[1001];

void sieve(int n) {
  for (int i = 0; i <= n; i++) primes[i] = 1;
  primes[0] = primes[1] = 0;
  for (int i = 2; i * i <= n; i++) {
    if (primes[i]) {
      for (int j = i * i; j <= n; j += i) {
        primes[j] = 0;
      }
    }
  }
}

int main() {
  sieve(1000);
  for(int i = 1; i <= 1000; i++) {
    if(primes[i]) printf("%d ", i);
  }
}