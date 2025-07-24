// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/

#include <bits/stdc++.h>
using namespace std;

int main() {
	string word;
	cin >> word;
	int num = 0, output=1;
	for(int i = 0; i < word.size(); i++) {
		if(isupper(word[i])) {
			num -= tolower(word[i]);
		} else {
			num += toupper(word[i]);
		}
    cout << word[i] << " " << num << endl;
	}
	num = abs(num);
  cout << num << endl;
	for(int i = 2; i < num; i++) {
		if(num % i == 0) {
			output=0;
			break;
		}
	}
	cout << output;
}