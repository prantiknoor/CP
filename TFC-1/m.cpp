#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  // for (int i = 1; i <= 100; i++) {
  //   if (isPrime(i)) cout << i << ", ";
  // }
  // return 0;
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    long long int a, b, n;
    int count = 0;
    cin >> a >> b >> n;
    cout << n << ": ";
    while (a <= b) {
      if (__gcd(a, n) == 1) {
        cout << "_ ";
        count++;
      } else {
        cout << a << " ";
      }
      a++;
    }
    cout << endl;
    cout << "Case #" << i << ": " << count << endl;
  }
}