#include <bits/stdc++.h>
using namespace std;

const int N = 40;

int main() {
  int T;
  cin >> T;

  long long int tree[N][N];
  tree[0][0] = 1;

  for (int i = 1; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        tree[i][j] = 1;
      } else {
        tree[i][j] = tree[i - 1][j - 1] + tree[i - 1][j];
      }
    }
  }

  while (T--) {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
      for(int j = 0; j <= i; j++) {
        cout << tree[i][j] << " ";
      }
      cout << endl;
    }
  }
}