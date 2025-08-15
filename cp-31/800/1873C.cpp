#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int point = 0;
    for (int i = 1; i <= 10; i++) {
      for (int j = 1; j <= 10; j++) {
        char c;
        cin >> c;
        if (c == 'X') {
          int x = i > 5 ? 5 - i % 6 : i;
          int y = j > 5 ? 5 - j % 6 : j;
          point += min(x, y);
        }
      }
    }
    cout << point << endl;
  }
}