#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, flag = 0;
    cin >> n;
    char s[n];
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }
    for (int i = 1; i < n - 1; i++) {
      for (int j = 0; j < n; j++) {
        if (j != i && s[j] == s[i]) {
          flag = 1;
          break;
        }
      }
      if(flag) break;
    }
    cout << (flag ? "YES" : "NO") << endl;
  }
}