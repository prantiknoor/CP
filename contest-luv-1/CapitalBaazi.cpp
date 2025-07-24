#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    string word;
    cin >> word;
    if (word.size() == 0) break;

    for (int i = 0; i < word.size(); i++) {
      cout << (char) toupper(word[i]);
    }
    cout << endl;
  }
}