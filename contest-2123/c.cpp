#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int input[n], output[n];

    for (int i = 0; i < n; i++) {
      cin >> input[i];
      output[i] = 0;
    }

    int min = 1000001, max = 0;

    for (int i = 0, j = n - 1; i < n; i++, j--) {
      if (input[i] < min) {
        output[i] = 1;
        min = input[i];
      }

      if (input[j] > max) {
        output[j] = 1;
        max = input[j];
      }
    }

    for(int i = 0; i < n; i++) {
      cout << output[i];
    }

    cout << endl;
  }
}