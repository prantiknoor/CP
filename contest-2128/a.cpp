#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n, c, a, coin = 0, step=0;
    vector<int> vector;
    cin >> n >> c;
    for(int i = 0; i < n; i++) {
      cin >> a;
      vector.push_back(a);
    }
    sort(vector.begin(), vector.end(), greater<int>());
    for(int i = 0; i < n; i++) {
      if(vector[i] * pow(2, step) > c) {
        coin++;
      } else {
        step++;
      }
    }
    cout << coin << endl;
  }
}