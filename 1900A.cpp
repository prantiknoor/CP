#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int u, count = 0, seq = 0;
    cin >> u;
    while (u--) {
      char cell;
      cin >> cell;

      if(seq == 3) continue;

      if (cell == '.') {
        if (++seq == 3) {
          count = 2;
          continue;
        }
        count++;
      } else {
        seq = 0;
      }
    }
    cout << count << endl;
  }
}

/*
My Understandings:
If there is 3 consecutive emtpy cell, the answer will be 2. Because operation could be done by the 2nd cell.

Algorithm:
If there anry 3 consecutive empty cell, return 2.
Else return the number of empty cells
*/