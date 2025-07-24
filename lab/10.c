#include <stdio.h>

int main() {
  int i = 0, sum=0;
  int arr[5];

  while (i < 5) {
    scanf("%d", &arr[i]);
    sum += arr[i];
    i++;
  }
  printf("Average = %f\n", (float) sum / 5.0);
}