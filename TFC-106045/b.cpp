#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    string r;
    while (n >= 1000) {
      r += 'M';
      n -= 1000;
    }
    if(n >= 900) {
      r += "CM";
      n -= 900;
    }
    if (n >= 500) {
      r += 'D';
      n -= 500;
    }
    if (n >= 400) {
      r += "CD";
      n -= 400;
    }
    while (n >= 100) {
      r += 'C';
      n -= 100;
    }
    if (n >= 90) {
      r += "XC";
      n -= 90;
    }
    if (n >= 50) {
      r += 'L';
      n -= 50;
    }
    if (n >= 40) {
      r += "XL";
      n -= 40;
    }
    while (n >= 10) {
      r += 'X';
      n -= 10;
    }
    if (n >= 9) {
      r += "IX";
      n -= 9;
    }
    if (n >= 5) {
      r += 'V';
      n -= 5;
    }
    if (n >= 4) {
      r += "IV";
      n -= 4;
    }
    while (n) {
      r += 'I';
      n--;
    }
    cout << r << endl;
  }
}