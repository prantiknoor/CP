#include <stdio.h>
#include <ctype.h>

int main() {
  char a, b, upper, lower;

  scanf("%c %c", &a, &b);
  
  upper = toupper(a);
  printf("%c\n", upper);
 
  lower = tolower(b);
  printf("%c\n", lower);

  return 0;
}