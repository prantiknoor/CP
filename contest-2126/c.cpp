#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, k, h, p, w = 0;
    cin >> n >> k;
    vector<int> heights;

    for (int i = 0; i < n; i++) {
      cin >> h;
      heights.push_back(h);
      if (i + 1 == k) {
        p = h;
      }
    }
    sort(heights.begin(), heights.end());

    for (int i = 0; i < n; i++) {
      if (heights[i] <= p) continue;
      if (p == heights.back()) break;

      w += (heights[i] - p);

      if (w <= p) {
        p = heights[i];
      } else {
        p = 0;
        break;
      }
    }

    if (p == 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}