#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int count_bits(int r, int b) {
  int c = ((r + 1) >> (b + 1)) * (1ll << b);
  c += max(0ll, (r + 1 - (1ll << b) - (((r + 1) >> (b + 1)) * (1ll << (b + 1)))));
  return c;
}
 
signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int T;
  cin >> T;
  while (T--) {
    int l, r, a=0, o=0, x=0;
    cin >> l >> r;
    for (int b = 60; b >= 0; b--) {
      int count = count_bits(r, b) - count_bits(l - 1, b);
      a <<= 1;
      o <<= 1;
      x <<= 1;
      if (count == (r - l + 1)) a++;
      if (count > 0) o++;
      if (count & 1) x++;
    }
    cout << a << " " << o << " " << x << endl;
  }
}