#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n) {
    int busket = 0, candy;
    for (int i = 0; i < n; i++) {
      cin >> candy;
      if ((busket + candy) <= 300) busket += candy;
    }
    cout << busket << endl;
    cin >> n;
  }
}