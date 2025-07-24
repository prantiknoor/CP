#include <ctype.h>
#include <stdio.h>

int isVowel(char l) {
  l = tolower(l);

  if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u') return 1;

  return 0;
}

int main() {
  char s[100];
  int vowel = 0, consonant = 0;
  scanf("%[^\n]", &s);

  for (int i = 0; s[i] != '\0'; i++) {
    if (isVowel(s[i]))
      vowel++;
    else
      consonant++;
  }

  printf("There are %d vowel(s) and %d consonant(s)\n", vowel, consonant);
}