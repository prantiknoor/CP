#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    string s;
    cin >> s;
    for(int i = 0; i <= s.size()-3; i++) {
      string ss = s.substr(i, 3);
      if(ss == "FFT") {
        s[i+1] = 'T';
        s[i+2] = 'F';
      } else if(ss == "NTT") {
        s[i] = 'T';
        s[i+1] = 'N';
      }
    }
    cout << s << endl;
  }
}