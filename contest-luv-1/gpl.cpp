#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int len;
    char bit;
    long long int num = 0;
    cin >> len;
    long long int pow2 = pow(2, len-1);

    for (int i = len - 1; i >= 0; i--) {
      cin >> bit;
      if (bit == '1') {
        num += pow2;
      }
      pow2 /= 2;
    }
    cout << num << endl;
  }
}
