#include <stdio.h>

int main() {
  long long int num, n;
  scanf("%lld", &n);
  num = n;
  int count = 0, lucky = 1;
  while (n) {
    if (n % 10 == 4 || n % 10 == 7) {
    } else {
      lucky = 0;
      break;
    }
    n /= 10;
    count++;
  }
  if (lucky) lucky = (count % 4 == 0) || (count % 7 == 0);
  if (lucky)
    printf("%lld is a lucky number", num);
  else
    printf("%lld is not a lucky number", num);
}