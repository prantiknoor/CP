#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    if ((n - 1) % 4 == 3) {
      cout << "Bob" << endl;
    } else {
      cout << "Alice" << endl;
    }
  }
}