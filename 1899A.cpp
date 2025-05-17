#include <bits/stdc++.h>
using namespace std;

int main() {
  int t, num;
  cin >> t;
  while (t--) {
    cin >> num;
    if ((num + 1) % 3 == 0 || (num - 1) % 3 == 0) {
      cout << "First" << endl;
    } else {
      cout << "Second" << endl;
    }
  }
}

/**
 * If Vanya cannot win in her first move, she cannot win. Because then the number can back and forth to the same number.
 * Let's say 3.
 * 2 & 4 neither is divisible by 3. So Vanya cannot win here.
 * Let's assume she increased the number to 4.
 * Then Vova can decrease the number to 3. Coming to the same number at the beginning. So it falls in a loop. Vanya loses.
 * Same thing happens if she decreased the number.
 */