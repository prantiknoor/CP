#include <stdio.h>

int main() {
  int n;
  scanf("%d\n", &n);
  int s[n];
  for (int i = 0; i < n; i++) {
    scanf("%c", &s[i]);
  }
  for (int i = 0; i < n; i++) {
    // printf("%c", s[i]);
    // continue;
    if (s[i] >= 'a' && s[i] <= 'z') {
      printf("%c", s[i] - ('a' - 'A'));
    } else {
      printf("%c", s[i]);
    }
  }
}