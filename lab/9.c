#include <stdio.h>

int main() {
  int a, b, c, mid;
  scanf("%d %d %d", &a, &b, &c);
  if(a >= b && a <= c) {
    mid = a;
  } else if(b >= a && b <= c) {
    mid = b;
  } else {
    mid = c;
  }
  printf("The middle number is %d\n", mid);
}