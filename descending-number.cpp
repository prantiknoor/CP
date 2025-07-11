// https://dimikoj.com/problems/3/descending-number

#include <iostream>
using namespace std;

int main() {
  for(int i = 1000; i > 0; i--) {
    cout << i << "\t";
    if((i-1) % 5 == 0) cout << endl;
  }
}