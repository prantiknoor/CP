// https://dimikoj.com/problems/6/summation

#include <iostream>
using namespace std;

int main() {
  int T, num, sum;
  cin >> T;
  while(T--) {
    cin >> num;
    sum = num/10000 + num%10;
    cout << "Sum = " << sum << endl;
  }
}