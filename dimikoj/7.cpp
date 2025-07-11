// https://dimikoj.com/problems/7/count-numbers

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;
  cin.ignore();
  while (T--) {
    string input;
    int count = 1;
    getline(cin, input);
    for (int i = 0; i < input.size(); i++) {
      if (input[i] == ' ' && input[i-1] != ' ') count++;
    }
    cout << count << endl;
  }
}