#include <stdio.h>

int main() {
  int count[10] = {0};
  char s[30];
  scanf("%s", s);
  for (int i = 0; s[i] != NULL; i++) {
    count[s[i] - '0']++;
  }
  for (int i = 0; i < 10; i++) {
    printf("%d = %d\n", i, count[i]);
  }
}