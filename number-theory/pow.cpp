#include <bits/stdc++.h>
using namespace std;

int pow(int b, int p, int m) {
  if (p == 0) return 1;
  int x = pow(b, p / 2, m);
  if (p & 1)
    return (x % m * x % m * b % m) % m;
  else
    return (x % m * x % m) % m;
}

int main() {
  int b, p;
  cin >> b >> p;
  cout << pow(b, p, 100);
}