// https://dimikoj.com/problems/9/square-number

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int T, num;
  cin >> T;
  while (T--) {
    cin >> num;
    double root = sqrt(num);

    if (root == floor(root)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
}