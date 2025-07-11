#include <iostream>
using namespace std;

int main() {
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    for (int i = 1, j; i <= N; i++) {
      for (j = 1; j <= N; j++) {
        cout << "*";
      }
      if(T == 0 && i == N) break;
      if(i == N) cout << endl;
      cout << endl;
    }
  }
}