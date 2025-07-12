// https://dimikoj.com/problems/8/small-to-large

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    int a, b, c, temp;
    cin >> a >> b >> c;

    if (a > b) {
      temp = a;
      a = b;
      b = temp;
    }

    if (c < a) {
      temp = a;
      a = c;
      c = b;
      b = temp;
    } else if (c < b) {
      temp = b;
      b = c;
      c = temp;
    }

    cout << "Case " << i << ": " << a << " " << b << " " << c << endl;
  }
}