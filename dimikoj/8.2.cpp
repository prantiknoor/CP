// https://dimikoj.com/problems/8/small-to-large

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

int main() {
  int T;
  cin >> T;
  for (int i = 1; i <= T; i++) {
    int a, b, c, temp;
    cin >> a >> b >> c;

    if(a > b) {
      swap(a, b);
    }
    
    if(c < a) {
      swap(b, c);
      swap(a, b);
    } else if(c < b) {
      swap(b, c);
    }
    
    cout << "Case " << i << ": " << a << " " << b << " " << c << endl;
  }
}