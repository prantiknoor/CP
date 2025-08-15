#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  set<string> leaves;
  cin >> n;
  cin.ignore();
  while (n--) {
    string leaf;
    // getline(cin, leaf);
    scanf("%^\n", &leaf);
    leaves.insert(leaf);
  }
  cout << leaves.size();
}