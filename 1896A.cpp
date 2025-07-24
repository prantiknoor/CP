#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b) {
  int *temp = a;
  a = b;
  b = temp;
}

int main() {
  int T, n;
  cin >> T;
  while (T--) {
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    bool recheck = true, sortable = true;

    while (recheck && sortable) {
      recheck = false;
      for (int i = 1; i < n - 1; i++) {
        if (arr[i - 1] > arr[i]) {
          sortable = false;
          break;
        }
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
          swap(arr[i], arr[i + 1]);
          recheck = true;
        }
      }
    }

    cout << (sortable ? "YES" : "NO") << endl;
  }
}