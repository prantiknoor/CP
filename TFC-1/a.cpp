#include <bits/stdc++.h>
using namespace std;

int countDivisors(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << i << " ";
      count++;
    }
  }
  cout << endl;
  return count;
}

void mul(vector<int>& x, int y) {
  int rem = 0;
  for (int i = 0; i < x.size(); i++) {
    int p = (x[i] * y) + rem;
    x[i] = p % 10;
    rem = p / 10;
  }
  while(rem) {
    x.push_back(rem % 10);
    rem /= 10;
  }
}


int main() {
  vector<int> x = {3, 4};
  mul(x, 33);
  for(int i = x.size()-1; i >= 0; i--) {
    cout << x[i] << " ";
  }
  return 0;
  int n, m, a;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int divisors = 0;
    cin >> a;

    if (m <= 2) {
      divisors += countDivisors(a * m);
    } else {
    }

    divisors += (m <= 2 ? m : (m + 1));

    if (a == 1) {
    } else if (a <= m) {
      divisors += countDivisors(a);
    } else {
      divisors += (countDivisors(a) + 1);
    }
    cout << divisors << " ";
  }
}