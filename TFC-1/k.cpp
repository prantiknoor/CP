#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long long int sum = 0;
  vector<int> a;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int ai;
    cin >> ai;
    a.push_back(ai);
  }
  sort(a.begin(), a.end());
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      sum += (a[i] & a[j]);
    }
  }
  cout << sum << endl;
}