#include <stdio.h>

void insertion_sort() {
  int n = 6;
  int arr[] = {1, 3, 8, 2, 4, 2};

  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }

  for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}

int main() { insertion_sort(); }