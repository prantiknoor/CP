// https://dimikoj.com/problems/10/run-rate-1

#include <iostream>
using namespace std;

int main() {
  int T;
  cin >> T;
  while (T--) {
    double r1, r2, b;
    cin >> r1 >> r2 >> b;
    double current_run_rate = r2 / ((300 - b) / 6);
    double required_run_rate = (r1 - r2 + 1) / (b / 6);

    printf("%.2lf %.2lf\n", current_run_rate, required_run_rate);
  }
}