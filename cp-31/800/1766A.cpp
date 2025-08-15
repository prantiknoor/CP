#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i += pow(10, ((int)log10(i))), count++);
    cout << count << endl;
  }
}