#include <bits/stdc++.h>
using namespace std;

int main() {
  int word_count;
  cin >> word_count;

  while (word_count--) {
    string word;
    cin >> word;
    cout << word.front() << word.size() << word.back() << endl;
  }
}