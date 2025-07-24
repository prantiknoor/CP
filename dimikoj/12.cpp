#include <iostream>
#include <vector>
using namespace std;

void multiply(int x, vector<int>& result) {
  int carry = 0;
  for (int i = 0; i < result.size(); i++) {
    int prod = x * result[i] + carry;
    result[i] = prod % 10;
    carry = prod / 10;
  }

  while (carry) {
    result.push_back(carry % 10);
    carry /= 10;
  }
}

int main() {
  int T, N;
  cin >> T;
  while (T--) {
    cin >> N;
    vector<int> f = {1};
    for (int i = 2; i <= N; i++) {
      multiply(i, f);
    }
    int count = 0;
    while (f[count++] == 0);
    cout << count - 1 << endl;
  }
}