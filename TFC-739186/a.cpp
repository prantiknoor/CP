#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n, k, a, gold=0, count=0;
    cin >> n >> k;
    while(n--) {
      cin >> a;
      if(a >= k) gold += a;
      else if(gold > 0 && a == 0){
        count++;
        gold--;
      }
    }
    cout << count << endl;
  }
}