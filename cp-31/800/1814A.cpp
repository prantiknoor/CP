#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long long int n, k;
    cin >> n >> k;
    cout << ((n % 2 == 0 || k % 2) ? "YES" : "NO") << endl;
  }
}