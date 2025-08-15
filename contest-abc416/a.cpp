#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, l, r, flag=1;
  string s;
  cin >> n >> l >> r >> s;
  for(int i = l-1; i < r; i++) {
    if(s[i] != 'o') {
      flag=0;
      break;
    }
  }
  cout << (flag ? "Yes" : "No") << endl;
}