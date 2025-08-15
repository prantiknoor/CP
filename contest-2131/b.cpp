#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
      if(i % 2 == 0) cout << "-1 ";
      else cout << (i+1 < n ? 3: 2) << " ";
    }
    cout << endl;
  }
}