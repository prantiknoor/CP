#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, count = 0;
    vector<vector<int>> c(2, vector<int>(2));
    cin >> a >> b >> c[0][0] >> c[0][1] >> c[1][0] >> c[1][1];
    vector<set<pair<int, int>>> pos(2);
    for (int i = 0; i < 2; i++) {
      pos[i].insert({c[i][0] + a, c[i][1] + b});
      pos[i].insert({c[i][0] + a, c[i][1] - b});
      pos[i].insert({c[i][0] - a, c[i][1] + b});
      pos[i].insert({c[i][0] - a, c[i][1] - b});

      pos[i].insert({c[i][0] + b, c[i][1] + a});
      pos[i].insert({c[i][0] + b, c[i][1] - a});
      pos[i].insert({c[i][0] - b, c[i][1] + a});
      pos[i].insert({c[i][0] - b, c[i][1] - a});
    }

    for (auto k : pos[0]) {
      for (auto q : pos[1]) {
        if (k == q) {
          count++;
          break;
        }
      }
    }
    cout << count << endl;
  }
}