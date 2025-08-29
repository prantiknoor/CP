#include <bits/stdc++.h>
#define int long long
using namespace std;

int to_int(string s, int l, int r) {
  int num = 0;
  while (l < r) {
    num += (s[l++] - '0');
    num *= 10;
  }
  return num / 10;
}

signed main() {
  string s;
  cin >> s;
  int n = s.size();
  int sum = 0;
  for (int c = 0; c < (1 << (n - 1)); c++) {
    int l = 0;
    for (int bit = 0; bit < (n - 1); bit++) {
      if ((c >> bit) & 1) {
        sum += to_int(s, l, bit + 1);
        l = bit + 1;
      }
    }
    sum += to_int(s, l, n);
  }
  cout << sum << endl;
}