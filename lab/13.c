#include <stdio.h>

char toUpper(char c) {
  if (c >= 'a' && c <= 'z') {
    return c - ('a' - 'A');
  } else {
    return c;
  }
}

char toLower(char c) {
  if (c >= 'A' && c <= 'Z') {
    return c + ('a' - 'A');
  } else {
    return c;
  }
}

int main() {
  char c;
  scanf("%c", &c);

  if (c >= 'a' && c <= 'z') {
    printf("%c", c - ('a' - 'A'));
  } else if (c >= 'A' && c <= 'Z') {
    printf("%c", c + ('a' - 'A'));
  } else {
    printf("%c", c);
  }

  // printf("%c\n", toLower(c));
}