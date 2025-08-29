#include <bits/stdc++.h>
using namespace std;

#define MOD 1e8

int main() {
  int T;
  cin >> T;
  map<int, int> primes = {{1, 19}, {2, 23}, {3, 31}, {4, 41}, {5, 53},
                          {6, 61}, {7, 71}, {8, 89}, {9, 97}};
  while (T--) {
    int n;
    cin >> n;
    cout << primes[n / MOD] << endl;
  }
}