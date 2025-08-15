#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, a, c1 = 0, c2 = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    a == 1 ? c1++ : c2++;
  }

  if (c2--) cout << "2 ";
  if (c1--) cout << "1 ";

  while (c2-- > 0) cout << "2 ";
  while (c1-- > 0) cout << "1 ";
}