#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, x, y, cost=0;
    cin >> a >> b >> x >> y;
    if (a > b) {
      cout << ((a & 1) && a - b == 1 ? y : -1) << endl;
    } else {
      if(x <= y) cout << (b-a)*x << endl;
      else {
        cout << ((x+y) * ((b-a) >> 1) + ((a-b) & 1 ? (a & 1 ? x: y): 0)) << endl;
      }
    }
  }
}