#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if(n < 2) return false;

  for(int i = 2; i*i <= n; i++) {
    if(n % i == 0) return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  cout << (isPrime(n-2) ? "2 " + to_string(n-2): "-1" );
}