#include <iostream>
#include <string>
#include <vector>
using namespace std;

int fact(int num) {
  int fact= 1;
  for (int i = 2; i <= num; i++) {
    fact *= i;
  }
  return fact;
}

int main() {
  int T;
  cin >> T;
  cin.ignore();
  while (T--) {
    string sentence;
    vector<string> words;
    
    int index = 0;
    words.push_back("");
    
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++) {
      words[index] += sentence[i];
      if (sentence[i] == ' ') {
        words.push_back("");
        index++;
      }
    }
    int unique_words=words.size();

    cout << sentence << endl;

    for(int i = 0; i < words.size(); i++) {
      for(int j = i+1; j < words.size(); j++) {
        if(words[i] == words[j]) {
          cout << words[i] << endl;
          unique_words--;
          break;
        };
      }
    }

    cout << unique_words << endl;
    // cout <<  "1/" << fact(count) << endl;
    // cout << words[index] << endl;
  }
}