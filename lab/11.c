#include <stdio.h>

int main() {
  int size, space=0;
  scanf("%d", &size);
  for (int i = size; i > 0; i--, space++) {
    for(int j = 0; j < space; j++) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("* ");
    }
    printf("\n");
  }
}