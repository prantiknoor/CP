#include <stdio.h>

int main() {
  char s[100];
  scanf("%[^\n]", s);
  printf("%s\n", s);
}