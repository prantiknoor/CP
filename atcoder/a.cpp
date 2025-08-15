#include <bits/stdc++.h>
using namespace std;

long long int to_int(string s, int l, int r) {
  long long int num = 0;
  while (l < r) {
    num += (s[l++] - '0');
    num *= 10;
  }
  cout << (num / 10) << " ";
  return num / 10;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();
  long long int sum = 0;
  for (int size = n; size >= 1; size--) {
    for (int i = 0; i < min(size, n - size + 1); i++) {
      int l = i, r = i + size;
      if (l > 0) sum += to_int(s, 0, l);
      while (l < n) {
        sum += to_int(s, l, r);
        l = r;
        r = min(r + size, n);
      }
      cout << " ";
    }
    cout << endl;
  }
  cout << sum << endl;
}