#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while(T--) {
    int n, k, o=0;
    string s;
    cin >> n >> k >> s;
    vector<int> v(26, 0);
    for(auto c: s) v[c-'a']++;
    for(auto c: v) (c & 1) && o++;
    cout << (k >= o-1 ? "YES": "NO") << endl; 
  }
}