#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    long long int n;
    cin >> n;
    cout << (n % 2 == 0 ? 2 : 1) << endl;
  }
}