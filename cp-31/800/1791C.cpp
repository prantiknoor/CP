#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    string s;
    if (n) cin >> s;
    int l = 0, r = n - 1, spl = n;
    while (l < r && s[l++] ^ s[r--]) spl -= 2;
    cout << spl << endl;
  }
}