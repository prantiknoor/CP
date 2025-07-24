#include <stdio.h>
#include <string.h>

int main() {
  char number[100];
  int digit_sum = 0;
  scanf("%s", number);

  for (int i = 0; i < strlen(number); i++) {
    digit_sum += (number[i] - '0');
  }

  printf("%d\n", digit_sum);
}