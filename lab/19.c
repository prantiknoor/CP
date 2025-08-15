#include <stdio.h>

int main() {
  int n, min = 1e9;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    if(a < min) min = a;
  }
  printf("%d", min);
}