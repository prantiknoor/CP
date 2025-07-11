#include <iostream>
using namespace std;

int main() {
  int t, N;
  cin >> t;
  for (int c = 1; c <= t; c++) {
    cin >> N;
    cout << "Case " << c << ":";
    for (int i = 1; i <= N; i++) {
      if (N % i == 0) {
        cout << " " << i;
      }
    }
    cout << endl;
  }
}