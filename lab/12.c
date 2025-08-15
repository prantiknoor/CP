#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

unsigned long int factorial(unsigned int n) {
  if (n <= 1) return 1;
  return n * factorial(n - 1);
}

int main() {
  // int a = 2, b = 3;
  // swap(&a, &b);
  printf("%ld", factorial(5));
}