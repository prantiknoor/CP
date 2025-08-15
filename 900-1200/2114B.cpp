#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k;
    cin >> n >> k;
    vector<int> count(2, -(n / 2 - k));
    while (n--) {
      char c;
      cin >> c;
      count[c - '0']++;
    }
    if ((count[0] >= 0 && count[1] >= 0) && !(count[0] & 1) && !(count[1] & 1))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}