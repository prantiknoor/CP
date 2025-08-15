#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k, count = 0;
  cin >> n >> k;
  vector<bool> v(n);
  for (int i = 0, a; i < n; i++) {
    cin >> a;
    v[i] = a % k == 0;
    cout << v[i] << " ";
  }
  cout << endl;
  int sum=0, c0 = 0, l = 0, r = 1;
  while (r <= n) {
    if (v[r]) {
      sum++;
    } 

    if(sum <= 0 || sum > k) {

    }
    
  }
  cout << count << endl;
}