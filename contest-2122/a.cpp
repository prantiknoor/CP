#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n, m;
    cin >> n >> m;
    if((n >= 2 && m > 2) || (n > 2 && m >= 2)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}