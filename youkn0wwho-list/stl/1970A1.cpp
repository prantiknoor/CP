#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int pb = 0;
  map<int, vector<char>> m{{0, {s[0]}}};

  for (int i = 1; i < s.size(); i++) {
    pb += (s[i - 1] == '(' ? 1 : -1);
    if (m.count(pb) == 0) m.insert(make_pair(pb, vector<char>()));
    m[pb].push_back(s[i]);
  }
  for (auto& p : m) {
    for (int i = p.second.size() - 1; i >= 0; i--) {
      cout << p.second[i];
    }
  }
}