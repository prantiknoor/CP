#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> bin(n, vector<int>(32, 0));
  vector<int> num(n);
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    num[i] = p;
    for (int j = 31; p > 0; j--) {
      bin[i][j] = p & 1;
      p >>= 1;
    }
  }
  vector<bool> choices(n, true);
  int c = n;
  for (int d = 0; d < 32; d++) {
    // cout << d << ": " << c << endl;
    int c1 = 0, c = 0;
    for (int i = 0; i < n; i++) {
      if (d > 28) cout << bin[i][d] << endl;
      if (bin[i][d]) c1++;
      if (choices[i]) c++;
    }
    cout << endl;
    if(c1==c) break;
    if (c1 == 0 || c1 == c || c1 * 2 == c) continue;
    for (int i = 0; i < n; i++) {
      if (choices[i]) {
        cout << bin[i][d] << " ^ " << (c1) << " " << c << endl;
        choices[i] = !(bin[i][d] ^ (c1 * 2 < c));
      }
    }
    for (auto choice : choices) {
      cout << choice << " ";
    }
    cout << endl << endl;
  }
}