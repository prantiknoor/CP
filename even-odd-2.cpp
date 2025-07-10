// https://dimikoj.com/problems/2/even-odd-2

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string num;
    cin >> num;
    if((int)num[num.size() - 1] % 2 == 0) {
      cout << "even" << endl;
    } else {
      cout << "odd" << endl;
    }
  }
}