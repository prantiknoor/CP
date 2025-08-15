#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int num, index = -1;
  scanf("%d", &num);
  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      index = i;
      break;
    }
  }
  printf("%d", index);
}