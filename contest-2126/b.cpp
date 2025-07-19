#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, a, h = 0;
    cin >> n >> k;
    for (int i = 0, c=k; i < n; i++) {
      cin >> a;
      if(a == 0 || c > k) {
        c--;
      } else {
        c=k;
      }
      if(c == 0) {
        h++;
        c=k+1;
      }
    }
    cout << h << endl;
  }
}