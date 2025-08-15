#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b) {
      cout << (c % 2 ? "First" : "Second") << endl;
    } else {
      cout << (a - c > b - c ? "First" : "Second") << endl;
    }
  }
}