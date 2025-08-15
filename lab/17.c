// Sorting - Non-decreasing order

#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int isSorted = 1;
  do {
    isSorted = 1;
    for (int i = 1; i < n; i++) {
      if (a[i - 1] < a[i]) {
        int temp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = temp;
        isSorted = 0;
      }
    }
  } while (!isSorted);
  for(int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
}