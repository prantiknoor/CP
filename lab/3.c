#include <stdio.h>

int main() {
  int num, sum=0;
  scanf("%d", &num);

  while(num) {
    sum += (num % 10);
    num /= 10;
  }

  printf("Sum of the digits = %d\n", sum);
}