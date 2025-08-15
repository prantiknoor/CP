#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    vector<int> pos2;
    for(int i = 1; i <= n; i++) {
      short int a;
      cin >> a;
      if(a == 2) pos2.push_back(i);
    }
    if(pos2.size() == 0) cout << 1 << endl;
    else if(pos2.size() % 2) cout << -1 << endl;
    else cout << pos2[pos2.size()/2-1] << endl;
  }
}