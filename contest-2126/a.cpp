#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int x, d=9;
    cin >> x;
    while(x) {
      if(x % 10 < d) {
        d = x % 10;
      }
      x /= 10;
    }
    cout << d << endl;
  }
}