#include <stdio.h>

void reverse_print(int n, char s[]) {
  if (n > 0) {
    printf("%c", s[n - 1]);
    reverse_print(n - 1, s);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  char s[n];
  scanf("%s", s);

  reverse_print(n, s);
}